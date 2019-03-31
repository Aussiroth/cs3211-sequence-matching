import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;
import x10.util.HashMap;
import x10.io.FileReader;
import x10.io.File;

public class SW {

  static val S1_SIZE = 100;
  static val S2_SIZE = 100;

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
        gap = row - i; // is positive
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
        gap = j - col; // is negative
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
        j += directions(i, j);
      }
    }
    Console.OUT.println(result1);
    Console.OUT.println(result2);
  }

  public static def match(string1:String, string2:String, simScore:Long, gapOpening:Long, gapExtension:Long) {
    val matrix = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, 0);
    val directions = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);

    for (i in 1..(S1_SIZE)) {
      for (j in 1..(S2_SIZE)) {
        var max:Long = Long.MIN_VALUE;
        var dir:Long = 0;

        var diagScore:Long;
        if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
          diagScore = matrix(i - 1, j - 1) + simScore;
        } else {
          diagScore = matrix(i - 1, j - 1) - simScore;
        }
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

    // for (i in 0..(S1_SIZE)) {
    //  for (j in 0..(S2_SIZE)) {
    //    Console.OUT.print(matrix(i, j) + " ");
    //  }
    //  Console.OUT.println();
    // }

    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }
  
  public static def parallelMatch(string1:String, string2:String, 
      simScore:Long, gapOpening:Long, gapExtension:Long) {
    var maxRow:Long = string1.length();
    var maxCol:Long = string2.length();

    val matrix = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, 0);
    val directions = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);
    

    for(line0 in 1..(maxRow+maxCol))
    {
      var startCol:Long = 0;
      if (line0 - maxRow > 0) {
        startCol = line0 - maxRow;
      } 
      // var startCol:Long = 0 > line0-maxRow ? 0 : line0 - maxRow;

      var count:Long = line0 < maxCol - startCol ? line0 : maxCol - startCol;
      count  = count < maxRow ? count : maxRow;
      var tempCount:Long=0;
      finish for(k in 0..(count -1)) async
      {
        tempCount++;

        var i:Long = maxRow;
        if (maxRow > line0) {
            i = line0;
        }
        // var i:Long = maxRow > line0 ? line0 : maxRow;
        i = i - k ;
        var j:Long = startCol + k + 1 ;

        /***************** Parallel Component ****************/
        var max:Long = Long.MIN_VALUE;
        var dir:Long = 0;

        var diagScore:Long;
        if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
          diagScore = matrix(i - 1, j - 1) + simScore;
        } else {
          diagScore = matrix(i - 1, j - 1) - simScore;
        }
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

        //    Console.OUT.print(matrix(i,j));
        //    Console.OUT.print(" ");

      }
      Console.OUT.print("PARALLEL: the loop: "+line0+" had :"+tempCount+" threads visit it\n");
    }
    // for (i in 0..(S1_SIZE)) {
    //  for (j in 0..(S2_SIZE)) {
    //    Console.OUT.print(matrix(i,j) + " ");
    //  }
    //  Console.OUT.println();
    // }
    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }


  public static def sequentialMatch(string1:String, string2:String, 
      simScore:Long, gapOpening:Long, gapExtension:Long) {
    var maxRow:Long = string1.length();
    var maxCol:Long = string2.length();

    val matrix = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, 0);
    val directions = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);
    
    var tempCount:Long=0;

    for(line0 in 1..(maxRow+maxCol))
    {
      tempCount++;

      var startCol:Long = 0;
      if (line0 - maxRow > 0) {
        startCol = line0 - maxRow;
      } 
      // var startCol:Long = 0 > line0-maxRow ? 0 : line0 - maxRow;

      var count:Long = line0 < maxCol - startCol ? line0 : maxCol - startCol;
      count  = count < maxRow ? count : maxRow;
      
      for(k in 0..(count -1))
      {
        var i:Long = maxRow;
        if (maxRow > line0) {
            i = line0;
        }
        // var i:Long = maxRow > line0 ? line0 : maxRow;
        i = i - k ;
        var j:Long = startCol + k + 1 ;

        /***************** Parallel Component ****************/
        var max:Long = Long.MIN_VALUE;
        var dir:Long = 0;

        var diagScore:Long;
        if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
          diagScore = matrix(i - 1, j - 1) + simScore;
        } else {
          diagScore = matrix(i - 1, j - 1) - simScore;
        }
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

        //    Console.OUT.print(matrix(i,j));
        //    Console.OUT.print(" ");

      }
      //  Console.OUT.println();
    Console.OUT.print("SEQUENTIAL: the loop: "+line0+" had :"+tempCount+" threads visit it\n");
    }
    // for (i in 0..(S1_SIZE)) {
    //  for (j in 0..(S2_SIZE)) {
    //    Console.OUT.print(matrix(i,j) + " ");
    //  }
    //  Console.OUT.println();
    //}
    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }


  public static def main (args:Rail[String]) {
    val indexMap = new Rail[Long](100);
    val blosum = new Array_2[Long](127, 127, 0);

    val gapOpening = -0;
    val gapExtension = -2;
    // val string1 = "GGTTGACTA";
    // val string2 = "TGTTACGG";
    val simScore = 3;

    val string1 = "ADDBADCBCADCADDBBDCADCABACCADBBDBADBCABBBAAABDBDABCDADDABABABDBAADCCDDBBAABBACACBDBCBBDCCDABCADDCBD";
    val string2 = "BBCCCBCADADCBAACBDDDBCBAABBBCBCBBCADAACCCCBCCCCACBABCCBAACBBCCCBCCADACCDADACABCBABDDCADDABDCCBADBCC";
    
    var startTime:Long = System.nanoTime();
    parallelMatch(string1, string2, simScore, gapOpening, gapExtension);
    var finalTime:Long = System.nanoTime() - startTime;
    Console.OUT.println("Parallel Runtime: " + finalTime/1000000.0 + "ms");

    startTime = System.nanoTime();
    sequentialMatch(string1, string2, simScore, gapOpening, gapExtension);
    finalTime = System.nanoTime() - startTime;
    Console.OUT.println("Sequential Runtime: " + finalTime/1000000.0 + "ms");
  }
}
