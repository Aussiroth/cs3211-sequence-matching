import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;
import x10.util.HashMap;
import x10.util.ArrayList;
import x10.io.FileReader;
import x10.io.File;
import x10.lang.Math;

public class MemoizedSW {

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

  public static def printMatrix(matrix:Array_2[Long], nRows:Long, nCols:Long) {
    for (i in 0..(nRows - 1)) {
      for (j in 0..(nCols - 1)) {
        Console.OUT.println(matrix(i, j) + " ");
      }
      Console.OUT.println();
    }
  }

  public static def railBacktrack(string1:String, string2:String,
      matrix:Array_2[Long], directions:Array_2[Long], maxCoordinates:Pair[Long, Long]) {
    var i:Long = maxCoordinates.first;
    var j:Long = maxCoordinates.second;
    val result1 = new Rail[Char](string1.length() + 100);
    val result2 = new Rail[Char](string1.length() + 100);
    var resultSize:Long = 0;

    var stringLength:Long = 0;
    var matchCount:Long = 0;
    var gapCount:Long = 0;
    while (matrix(i, j) != 0) {
      if (directions(i,j) == 0) {
        result1(resultSize) = string1.charAt(Int.operator_as(i - 1));
        result2(resultSize) = string2.charAt(Int.operator_as(j - 1));
        resultSize += 1;

        if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
          matchCount += 1;
        }
        i -= 1;
        j -= 1;
        stringLength += 1;
      } else if (directions(i, j) > 0) {
        for (k in (0..(directions(i, j) - 1))) {
          result1(resultSize) = string1.charAt(Int.operator_as(i - k - 1));
          result2(resultSize) = '-';
          resultSize += 1;
          stringLength += 1;
        }
        gapCount += directions(i, j);
        i -= directions(i, j);
      } else {
        for (k in (0..(-directions(i, j) - 1))) {
          result1(resultSize) = '-';
          result2(resultSize) = string2.charAt(Int.operator_as(j - k - 1));
          resultSize += 1;
          stringLength += 1;        
        }
        gapCount -= directions(i, j);
        j += directions(i, j); 
      }
    }
    Console.OUT.println("Identity: " + matchCount + "/" + stringLength);
    Console.OUT.println("Gaps: " + gapCount + "/" + stringLength);
    Console.OUT.println("Score: " + matrix(maxCoordinates.first, maxCoordinates.second));
    
    for (k in (0..(resultSize - 1))) {
      Console.OUT.print(result1(k));
    }
    Console.OUT.println();
    for (k in (0..(resultSize - 1))) {
      Console.OUT.print(result2(k));
    }
    Console.OUT.println();
  }

  public static def backtrack(string1:String, string2:String,
      matrix:Array_2[Long], directions:Array_2[Long], maxCoordinates:Pair[Long, Long]) {
    var i:Long = maxCoordinates.first;
    var j:Long = maxCoordinates.second;
    var result1:String = "";
    var result2:String = "";

    var stringLength:Long = 0;
    var matchCount:Long = 0;
    var gapCount:Long = 0;
    while (matrix(i, j) != 0) {
      if (directions(i,j) == 0) {
        result1 = string1.charAt(Int.operator_as(i - 1)) + result1;
        result2 = string2.charAt(Int.operator_as(j - 1)) + result2;
        if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
          matchCount += 1;
        }
        i -= 1;
        j -= 1;
        stringLength += 1;
      } else if (directions(i, j) > 0) {
        for (k in (0..(directions(i, j) - 1))) {
          result2 = '-' + result2;
          result1 = string1.charAt(Int.operator_as(i - k - 1)) + result1;
          stringLength += 1;
        }
        gapCount += directions(i, j);
        i -= directions(i, j);
      } else {
        for (k in (0..(-directions(i, j) - 1))) {
          result1 = '-' + result1;
          result2 = string2.charAt(Int.operator_as(j - k - 1)) + result2;
          stringLength += 1;        
        }
        gapCount -= directions(i, j);
        j += directions(i, j); 
      }
    }
    Console.OUT.println("Identity: " + matchCount + "/" + stringLength);
    Console.OUT.println("Gaps: " + gapCount + "/" + stringLength);
    Console.OUT.println("Score: " + matrix(maxCoordinates.first, maxCoordinates.second));
    Console.OUT.println(result1);
    Console.OUT.println(result2);
  }

  public static def match(string1:String, string2:String, 
      blosum:Array_2[Long], 
      gapOpening:Long, gapExtension:Long) {
    val bestLeftwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
    val bestUpwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
    val matrix = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
    val directions = new Array_2[Long](string1.length() + 1, string2.length() + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);

    for (i in 1..(string1.length())) {
      for (j in 1..(string2.length())) {
        var max:Long = Long.MIN_VALUE;

        var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
        var secondChar:Char = string2.charAt(Int.operator_as(j - 1));

        var diagScore:Long = max(bestLeftwards(i - 1, j - 1), bestUpwards(i - 1, j - 1), matrix(i - 1, j - 1));
        matrix(i, j) = diagScore + blosum(firstChar.ord(), secondChar.ord());
        if (matrix(i, j) < 0) matrix(i, j) = 0;

        bestUpwards(i, j) = max(gapOpening + matrix(i - 1, j),
            gapOpening + bestLeftwards(i - 1, j),
            gapExtension + bestUpwards(i - 1, j));
        bestUpwards(i, j) = Math.max(bestUpwards(i, j), bestUpwards(i - 1, j) + gapOpening);
        if (bestUpwards(i, j) < 0) bestUpwards(i, j) = 0;

        bestLeftwards(i, j) = max(gapOpening + matrix(i, j - 1),
            gapExtension + bestLeftwards(i, j - 1),
            gapOpening + bestUpwards(i, j - 1));
        bestLeftwards(i, j) = Math.max(bestLeftwards(i, j), bestLeftwards(i, j - 1) + gapOpening);
        if (bestLeftwards(i, j) < 0) bestLeftwards(i, j) = 0;

        if (matrix(i, j) >= bestLeftwards(i, j) && matrix(i, j) >= bestUpwards(i, j)) {
          directions(i, j) = 0;
          max = matrix(i, j);
        } else if (bestLeftwards(i, j) >= matrix(i, j) && bestLeftwards(i, j) >= bestUpwards(i, j)) {
          directions(i, j) = -1;
          max = bestLeftwards(i, j);
        } else {
          directions(i, j) = 1;
          max = bestUpwards(i, j);
        }

        if (max > globalMax) {
          globalMax = max;
          maxCoordinates = new Pair[Long, Long](i, j);
        }
      }
    }
    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }

  public static def max(first:Long, second:Long, third:Long) {
    if (first >= second && first >= third) {
      return first;
    } else if (second >= third && second >= first) {
      return second;
    } else {
      return third;
    }
  }

  public static def parallelMatch(string1:String, string2:String,
      blosum:Array_2[Long], gapOpening:Long, gapExtension:Long, cutoff:Long) {
    //var cutoff:Long = ;
    var maxRow:Long = string1.length();
    var maxCol:Long = string2.length();

    val bestLeftwards = new Array_2[Long](maxRow + 1, maxCol + 1, 0);
    val bestUpwards = new Array_2[Long](maxRow + 1, maxCol + 1, 0);
    val matrix = new Array_2[Long](maxRow + 1, maxCol + 1, 0);
    val directions = new Array_2[Long](maxRow + 1, maxCol + 1, 0);

    maxRow = Int.operator_as(Math.ceil(Double.implicit_operator_as(maxRow) / cutoff));
    maxCol = Int.operator_as(Math.ceil(Double.implicit_operator_as(maxCol) / cutoff));

    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);

    for(line in 1..(maxRow + maxCol))
    {
      var startCol:Long = 0;
      if (line - maxRow > 0) {
        startCol = line - maxRow;
      }

      var count:Long = line < maxCol - startCol ? line : maxCol - startCol;
      count = count < maxRow ? count : maxRow;

      /***************** Parallel Component ****************/
      finish for(k in 0..(count - 1)) async
      {
        var i:Long = maxRow;
        if (maxRow > line) {
          i = line;
        }
        i = i - k ;
        var j:Long = startCol + k + 1 ;


        // scale i and j
        i = (i - 1) * cutoff + 1;
        j = (j - 1) * cutoff + 1;

        var cellMaxRow:Long = i + cutoff - 1;
        var cellMaxCol:Long = j + cutoff - 1;

        // ensure cellMaxRow and cellMaxCol does not exceed size of matrix
        if (cellMaxRow > string1.length()) {
          cellMaxRow = string1.length();
        }
        if (cellMaxCol > string2.length()) {
          cellMaxCol = string2.length();
        }

        for (a in i..(cellMaxRow)) {
          for (b in j..(cellMaxCol)) {
            var max:Long = Long.MIN_VALUE;

            var firstChar:Char = string1.charAt(Int.operator_as(a - 1));
            var secondChar:Char = string2.charAt(Int.operator_as(b - 1));

            var diagScore:Long = max(bestLeftwards(a - 1, b - 1), bestUpwards(a - 1, b - 1), matrix(a - 1, b - 1));
            matrix(a, b) = diagScore + blosum(firstChar.ord(), secondChar.ord());
            if (matrix(a, b) < 0) matrix(a, b) = 0;

            bestUpwards(a, b) = max(gapOpening + matrix(a - 1, b),
                gapOpening + bestLeftwards(a - 1, b),
                gapExtension + bestUpwards(a - 1, b));
            bestUpwards(a, b) = Math.max(bestUpwards(a, b), bestUpwards(a - 1, b) + gapOpening);
            if (bestUpwards(a, b) < 0) bestUpwards(a, b) = 0;

            bestLeftwards(a, b) = max(gapOpening + matrix(a, b - 1),
                gapExtension + bestLeftwards(a, b - 1),
                gapOpening + bestUpwards(a, b - 1));
            bestLeftwards(a, b) = Math.max(bestLeftwards(a, b), bestLeftwards(a, b - 1) + gapOpening);
            if (bestLeftwards(a, b) < 0) bestLeftwards(a, b) = 0;


            if (matrix(a, b) >= bestLeftwards(a, b) && matrix(a, b) >= bestUpwards(a, b)) {
              directions(a, b) = 0;
              max = matrix(a, b);
            } else if (bestLeftwards(a, b) >= matrix(a, b) && bestLeftwards(a, b) >= bestUpwards(a, b)) {
              directions(a, b) = -1;
              max = bestLeftwards(a, b);
            } else {
              directions(a, b) = 1;
              max = bestUpwards(a, b);
            }

            if (max > globalMax) {
              globalMax = max;
              maxCoordinates = new Pair[Long, Long](a, b);
            }
          }
        }
      }
    }
    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }

  public static def main (args:Rail[String]) {
    var firstStringFile:String = args(0);
    var secondStringFile:String = args(1);
    var matchFile:String = args(2);
    var gapOpening:Long = -Int.parse(args(3));
    var gapExtension:Long = -Int.parse(args(4));
    var cutoff:Long = Int.parse(args(5));

    var string1:String = "";
    var string2:String = "";

    val FIRST_STRING_FILE = new File(firstStringFile);
    val reader1 = new FileReader(FIRST_STRING_FILE);
    var line:String;
    line = reader1.readLine();
    while (true) {
      try {
        line = reader1.readLine();
      }
      catch (Exception) {
        break;
      }
      string1 = string1 + line.trim();
    }
    val SECOND_STRING_FILE = new File(secondStringFile);
    val reader2 = new FileReader(SECOND_STRING_FILE);
    line = reader2.readLine();
    while (true) {
      try {
        line = reader2.readLine();
      }
      catch (Exception) {
        break;
      }
      string2 = string2 + line.trim();
    }

    val indexMap = new Rail[Long](100);
    val blosum = new Array_2[Long](127, 127, 0);

    val MATCH_FILE = new File(matchFile);
    val matchReader = new FileReader(MATCH_FILE);
    val headerOrder = new ArrayList[Char]();
    while (((line = matchReader.readLine()) != null) && (line.trim().charAt(Int.operator_as(0)) == '#'));

    val headerLine = splitString(line.trim());
    for (i in 0..(headerLine.size() - 1)) {
      headerOrder.add(headerLine.get(i).charAt(Int.operator_as(0)));
    }
    while (true) {
      try {
        line = matchReader.readLine();
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
    
    Console.OUT.println("==================== Memoized Smith Waterman ==================");
    Console.OUT.println("Cutoff = " + cutoff + " ----- Size = " + string1.length());
    var startTime:Long = System.nanoTime();
    parallelMatch(string1, string2, blosum, gapOpening, gapExtension, cutoff);
    var finalTime:Long = System.nanoTime() - startTime;
    Console.OUT.println("Parallel Runtime: " + finalTime/1000000.0 + "ms");

    startTime = System.nanoTime();
    match(string1, string2, blosum, gapOpening, gapExtension);
    finalTime = System.nanoTime() - startTime;
    Console.OUT.println("Sequential Runtime: " + finalTime/1000000.0 + "ms");
    }
}
