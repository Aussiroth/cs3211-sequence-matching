import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;

public class SW {
  
  // TODO: Make amino acid size dynamic
  static val NUM_AMINO_ACIDS = 24;


  static val S1_SIZE = 9;
  static val S2_SIZE = 8;

  static val DIAG = 0;
  static val UP = 1;
  static val LEFT = 2;
  
  public static def checkUpwards(matrix:Array_2[Long], directions:Array_2[Long], gap_opening:Long, 
        gap_extension:Long, row:Long, col: Long) {
    
    var max:Long = Long.MIN_VALUE;
    var gap:Long = -1;

    for (i in 0..(row - 1)) {
      var score:Long = matrix(i, col) + gap_extension * (row - i);
      
      if (directions(i, col) <= 0) {
        score += gap_opening;  
      }
      
      if (score > max) {
        max = score;
        gap = row - i;
      }
    }
    return new Pair[Long, Long](max, gap);
  }
  
  public static def checkLeftwards(matrix:Array_2[Long], directions:Array_2[Long], gap_opening:Long, 
        gap_extension:Long, row:Long, col: Long) {
    
    var max:Long = Long.MIN_VALUE;
    var gap:Long = -1;

    for (j in 0..(col - 1)) {
      
      var score:Long = matrix(row, j) + gap_extension * (col - j);
      if (directions(row, j) >= 0) {
        score += gap_opening;  
      }

      if (score > max) {
        max = score;
        gap = j - col;
      }
    }
    return new Pair[Long, Long](max, gap);
  }

  public static def match(string1:String, string2:String, simScore:Long, gap_opening:Long, gap_extension:Long) {
    val matrix = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, 0);
    val directions = new Array_2[Long](S1_SIZE + 1, S2_SIZE + 1, -1);
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

        var upResult:Pair[Long, Long] = checkUpwards(matrix, directions, gap_opening, gap_extension, i, j);
        var upScore:Long = upResult.first;
        if (upScore > max) {
          max = upScore;
          dir = upResult.second;
        }

        var leftResult:Pair[Long, Long] = checkLeftwards(matrix, directions, gap_opening, gap_extension, i, j);
        var leftScore:Long = leftResult.first;
        if (leftScore > max) {
          max = leftScore;
          dir = leftResult.second;
        }

        max = max < 0 ? 0 : max;
        
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
  }

  
  public static def main (args:Rail[String]) {
    val indexMap = new Rail[Long](100);
    val blosum = new Array_2[Long](NUM_AMINO_ACIDS, NUM_AMINO_ACIDS);
    
    val gap_opening = -0;
    val gap_extension = -2;
    val string1 = "GGTTGACTA";
    val string2 = "TGTTACGG";
    var simScore:Long = 3;
    match(string1, string2, simScore, gap_opening, gap_extension);
  }
}
