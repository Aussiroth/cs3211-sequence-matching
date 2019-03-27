import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;
import x10.util.HashMap;
import x10.util.ArrayList;
import x10.io.FileReader;
import x10.io.File;

public class SW {
  
  // TODO: Make amino acid size dynamic
  static val NUM_AMINO_ACIDS = 24;

  static val S1_SIZE = 9;
  static val S2_SIZE = 8;

  static val DIAG = 0;
  static val UP = 1;
  static val LEFT = 2;

  public static def splitString(lineToSplit:String) {
    val tokens = new ArrayList[String]();
    var currToken:String = "";
    for (i in 0..(lineToSplit.length()-1)) {
      if (lineToSplit.charAt(Int.operator_as(i)) == ' ') {
        if (currToken.length() > 0) {
          tokens.add(currToken);
          currToken = "";
        }
      }
      else {
        currToken = currToken + lineToSplit.charAt(Int.operator_as(i));
      }
    }
    if (currToken.length() > 0) {
      tokens.add(currToken);
    }
    return tokens;
  }

  public static def checkUpwards(matrix:Array_2[Long], directions:Array_2[Long], gapOpening:Long, 
        gapExtension:Long, row:Long, col: Long) {
    
    var max:Long = Long.MIN_VALUE;
    var gap:Long = -1;

    for (i in 0..(row - 1)) {
      var score:Long = matrix(i, col) + gapExtension * (row - i);
      
      if (directions(i, col) <= 0) {
        score += gapOpening;  
      }
      
      if (score > max) {
        max = score;
        gap = row - i;
      }
    }
    return new Pair[Long, Long](max, gap);
  }
  
  public static def checkLeftwards(matrix:Array_2[Long], directions:Array_2[Long], gapOpening:Long, 
        gapExtension:Long, row:Long, col: Long) {
    
    var max:Long = Long.MIN_VALUE;
    var gap:Long = -1;

    for (j in 0..(col - 1)) {
      
      var score:Long = matrix(row, j) + gapExtension * (col - j);
      if (directions(row, j) >= 0) {
        score += gapOpening;  
      }

      if (score > max) {
        max = score;
        gap = j - col;
      }
    }
    return new Pair[Long, Long](max, gap);
  }

  public static def backtrack(string1:String, string2:String,
        matrix:Array_2[Long], directions:Array_2[Long], maxCoordinates:Pair[Long, Long]) {
    var i:Long = maxCoordinates.first;
    var j:Long = maxCoordinates.second;
    var result1:String = "";
    var result2:String = "";
    while (matrix(i, j) != 0) {
      if (directions(i,j) == 0) {
        result1 = string1.charAt(Int.operator_as(i - 1)) + result1;
        result2 = string2.charAt(Int.operator_as(j - 1)) + result2;
        i -= 1;
        j -= 1;
      } else if (directions(i, j) > 0) {
        for (k in (0..(directions(i, j) - 1))) {
          result2 = '-' + result2;
          result1 = string1.charAt(Int.operator_as(i - k - 1)) + result1;
        }
        i -= directions(i, j);
      } else {
        for (k in (0..(directions(i, j) - 1))) {
          result1 = '-' + result1;
          result2 = string2.charAt(Int.operator_as(j - k - 1)) + result2;
        }
        j -= directions(i, j);
      }
    }
    Console.OUT.println(result1);
    Console.OUT.println(result2);
  }

  public static def match(string1:String, string2:String, blosum:Array_2[Long], gapOpening:Long, gapExtension:Long) {
    val matrix = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, 0);
    val directions = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);
    
    for (i in 1..(S1_SIZE)) {
      for (j in 1..(S2_SIZE)) {
        var max:Long = Long.MIN_VALUE;
        var dir:Long = 0;

        var diagScore:Long;
        var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
        var secondChar:Char = string2.charAt(Int.operator_as(j - 1));
        diagScore = matrix(i-1,j-1) + blosum(firstChar.ord(), secondChar.ord());
        if (diagScore > max) {
          max = diagScore;
          dir = 0;
        }

        var upResult:Pair[Long, Long] = checkUpwards(matrix, directions, gapOpening, gapExtension, i, j);
        var upScore:Long = upResult.first;
        if (upScore > max) {
          max = upScore;
          dir = upResult.second;
        }

        var leftResult:Pair[Long, Long] = checkLeftwards(matrix, directions, gapOpening, gapExtension, i, j);
        var leftScore:Long = leftResult.first;
        if (leftScore > max) {
          max = leftScore;
          dir = leftResult.second;
        }

        max = max < 0 ? 0 : max;
        
        if (max > globalMax) {
          globalMax = max;
          maxCoordinates = new Pair[Long, Long](i, j);
        }

        matrix(i, j) = max;
        directions(i, j) = dir;
      }
    }

    for (i in 0..(S1_SIZE)) {
      for (j in 0..(S2_SIZE)) {
        Console.OUT.print(matrix(i, j) + " ");
      }
      Console.OUT.println();
    }

    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }

  
  public static def main (args:Rail[String]) {
    val indexMap = new Rail[Long](100);
    val blosum = new Array_2[Long](127, 127, 0);
    // val blosum = new HashMap[Char, HashMap[Char, Long]]();
    
    val FILE = new File("BLOSUMDNA");
    val reader = new FileReader(FILE);

    var line:String;

    val headerOrder = new ArrayList[Char]();
    while (((line = reader.readLine()) != null) && (line.trim().charAt(Int.operator_as(0)) == '#'));
    
    val headerLine = splitString(line.trim());
    Console.OUT.println(headerLine);
    for (i in 0..(headerLine.size() - 1)) {
      headerOrder.add(headerLine.get(i).charAt(Int.operator_as(0)));
    }
    Console.OUT.println(headerOrder);
    while (true) {
      try {
        line = reader.readLine();
      }
      catch (Exception) {
        break;
      }
      val currLine = splitString(line.trim());
      var currChar:Char = currLine.get(0).charAt(Int.operator_as(0));
     for (i in 1..(currLine.size()-1)) {
        blosum(currChar.ord(), headerOrder.get(i-1).ord()) = Int.parse(currLine.get(i));
      }
    }
    
    val gapOpening = -0;
    val gapExtension = -2;
    val string1 = "GGTTGACTA";
    val string2 = "TGTTACGG";
    var simScore:Long = 3;
    match(string1, string2, blosum, gapOpening, gapExtension);
  }
}
