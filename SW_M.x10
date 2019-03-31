import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;
import x10.util.HashMap;
import x10.util.ArrayList;
import x10.io.FileReader;
import x10.io.File;

public class SW_M {

  // TODO: Make amino acid size dynamic
  static val NUM_AMINO_ACIDS = 24;

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

    var stringLength:Long = 0;
    var matchCount:Long = 0;
    var gapCount:Long = 0;
    while (matrix(i, j) != 0) {
      if (directions(i,j) == 0) {
        result1 = string1.charAt(Int.operator_as(i - 1)) + result1;
        result2 = string2.charAt(Int.operator_as(j - 1)) + result2;
        i -= 1;
        j -= 1;
        matchCount += 1;
        stringLength += 1;
      } else if (directions(i, j) > 0) {
        for (k in (0..(directions(i, j) - 1))) {
          result2 = '-' + result2;
          result1 = string1.charAt(Int.operator_as(i - k - 1)) + result1;
          stringLength += 1;
        }
        i -= directions(i, j);
        gapCount += 1;
      } else {
        for (k in (0..(-directions(i, j) - 1))) {
          result1 = '-' + result1;
          result2 = string2.charAt(Int.operator_as(j - k - 1)) + result2;
          stringLength += 1;        
        }
        j += directions(i, j);
        gapCount += 1;
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
    val S1_SIZE = string1.length();
    val S2_SIZE = string2.length();
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
        //Console.OUT.print(matrix(i, j) + " ");
      }
      //Console.OUT.println();
    }

    backtrack(string1, string2, matrix, directions, maxCoordinates);
  }

  public static def parallelMatch(string1:String, string2:String,
      blosum:Array_2[Long], gapOpening:Long, gapExtension:Long) {
    var maxRow:Long = string1.length();
    var maxCol:Long = string2.length();

    var cutoff:Long = 2;

    var currentDiagBlocks:Long = 0;
    var currentStartBlockRow:Long = 1;
    var currentStartBlockCol:Long = 1;
	var diagonalCount:Long;
	var diagonalMax:Long;
	
	if(maxRow%cutoff==0)
	{
		if(maxCol%cutoff==0)
		{
			diagonalCount=(maxRow/cutoff)+(maxCol/cutoff)-1;
			diagonalMax=(maxCol/cutoff);
		}
		else
		{
			diagonalCount=(maxRow/cutoff)+(maxCol/cutoff);
			diagonalMax=(maxCol/cutoff)+1;
		}
	}
	else 
	{
		if(maxCol%cutoff==0)
		{
			diagonalCount=(maxRow/cutoff)+(maxCol/cutoff);
			diagonalMax=(maxCol/cutoff);
		}
		else
		{
			diagonalCount=(maxRow/cutoff)+(maxCol/cutoff)+1;
			diagonalMax=(maxCol/cutoff)+1;
		}
	}

    val matrix = new Array_2[Long](maxRow + 1, maxCol + 1, 0);
    val directions = new Array_2[Long](maxRow + 1, maxCol + 1, -1);
    var globalMax:Long = Long.MIN_VALUE;
    var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);
	var maxColTemp:Long = 0;
	var maxRowTemp:Long = 0;

	Console.OUT.print("total diagonal count: "+diagonalCount+ "and max blocks at a diagonal should be "+diagonalMax+"\n");
    for(line0 in 1..(diagonalCount))
    {
		Console.OUT.print("currently at diagonal: "+line0+"\n");

      var tempCount:Long=0;

      if(line0 > diagonalMax)
      {
        currentDiagBlocks= diagonalMax - (line0 - diagonalMax);
		currentStartBlockRow = (maxRowTemp-1)*cutoff +1 ;
		currentStartBlockCol = maxColTemp +1;
		maxRowTemp++;

      }
      else if(line0 == diagonalMax)
      {
        currentDiagBlocks= diagonalMax;
		currentStartBlockRow = 1;
		currentStartBlockCol = (line0-1)*cutoff +1 ;
		maxColTemp = (line0-1)*cutoff +1;
      }
      else if(line0<diagonalMax)
      {
        currentDiagBlocks = line0;
		currentStartBlockRow = 1;
		currentStartBlockCol = (line0-1)*cutoff + 1;
		maxColTemp = (line0-1)*cutoff + 1;
      }
//=========================start of parallel============================
      finish for(k in 0..(currentDiagBlocks-1)) async
      {
			tempCount++;
		//i -> row, j-> col;
		
        /***************** (relative (0,0) ****************/
        var i:Long = currentStartBlockRow + k*cutoff;
        var j:Long = currentStartBlockCol - k*cutoff;
		
        if(1)
        {
          var max:Long = Long.MIN_VALUE;
          var dir:Long = 0;

          var diagScore:Long;
          var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
          var secondChar:Char = string2.charAt(Int.operator_as(j - 1));
          diagScore = matrix(i,j) + blosum(firstChar.ord(), secondChar.ord());
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

        /***************** (relative (1,0) ****************/
        i = currentStartBlockRow + k*cutoff;
        j = currentStartBlockCol - k*cutoff;

        if(i<=maxRow&&j<=maxCol&&i>0&&j>0)
        {
          var max:Long = Long.MIN_VALUE;
          var dir:Long = 0;

          var diagScore:Long;
          var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
          var secondChar:Char = string2.charAt(Int.operator_as(j - 1));
          diagScore = matrix(i,j) + blosum(firstChar.ord(), secondChar.ord());
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
        /***************** (relative (0,1) ****************/
        i = currentStartBlockRow + k*cutoff;
        j = currentStartBlockCol - k*cutoff;

        if(i<=maxRow&&j<=maxCol&&i>0&&j>0)
        {
          var max:Long = Long.MIN_VALUE;
          var dir:Long = 0;

          var diagScore:Long;
          var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
          var secondChar:Char = string2.charAt(Int.operator_as(j - 1));
          diagScore = matrix(i,j) + blosum(firstChar.ord(), secondChar.ord());
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
        /***************** (relative (1,1) ****************/
        i = currentStartBlockRow + k*cutoff;
        j = currentStartBlockCol - k*cutoff;

        if(i<=maxRow&&j<=maxCol&&i>0&&j>0)
        {
          var max:Long = Long.MIN_VALUE;
          var dir:Long = 0;

          var diagScore:Long;
          var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
          var secondChar:Char = string2.charAt(Int.operator_as(j - 1));
          diagScore = matrix(i,j) + blosum(firstChar.ord(), secondChar.ord());
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
	Console.OUT.print("for diagonal = "+line0+" i have ran this many blocks "+tempCount+"/"+currentDiagBlocks+"\n");
      // for (i in 0..(S1_SIZE)) {
      //  for (j in 0..(S2_SIZE)) {
      //    Console.OUT.print(matrix(i,j) + " ");
      //  }
      //  Console.OUT.println();
      // }
      backtrack(string1, string2, matrix, directions, maxCoordinates);
    }
  }

  public static def main (args:Rail[String]) {
    var firstStringFile:String = args(0);
    var secondStringFile:String = args(1);
    var matchFile:String = args(2);
    var gapOpening:Long = Int.parse(args(3));
    var gapExtension:Long = Int.parse(args(4));

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
      string1 = string1 + line;
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
      string2 = string2 + line;
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

    var startTime:Long = System.nanoTime();
    parallelMatch(string1, string2, blosum, gapOpening, gapExtension);
    var finalTime:Long = System.nanoTime() - startTime;
    Console.OUT.println("Parallel Runtime: " + finalTime/1000000.0 + "ms");


    startTime = System.nanoTime();
    match(string1, string2, blosum, gapOpening, gapExtension);
    finalTime = System.nanoTime() - startTime;
    Console.OUT.println("Sequential Runtime: " + finalTime/1000000.0 + "ms");match(string1, string2, blosum, gapOpening, gapExtension);
  }
}
