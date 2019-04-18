import x10.array.*;
import x10.io.Console;
import x10.util.Random;
import x10.util.Pair;
import x10.util.ArrayList;
import x10.io.FileReader;
import x10.io.File;
import x10.lang.Math;

public class MemoizedSW {

    /**
     * Parses arguments to obtain strings, substitution matrix and gap costs and runs parallel and
     * sequential implementations of the Smith-Waterman algorithm.
     * Results and runtimes of the algorithms are printed.
     */
    public static def main (args:Rail[String]) {
        
        // get arguments
        var firstStringFileName:String = args(0);
        var secondStringFileName:String = args(1);
        var matchFileName:String = args(2);
        var gapOpening:Long = -Int.parse(args(3));
        var gapExtension:Long = -Int.parse(args(4));
        var cutoff:Long = Int.parse(args(5));

        // get strings from files
        var string1:String = "";
        var string2:String = "";

        val firstStringFile = new File(firstStringFileName);
        val reader1 = new FileReader(firstStringFile);
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
        val secondStringFile = new File(secondStringFileName);
        val reader2 = new FileReader(secondStringFile);
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

        // get substitution matrix
        val substitution = new Array_2[Long](127, 127, 0);

        val matchFile = new File(matchFileName);
        val matchReader = new FileReader(matchFile);
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
                substitution(currChar.ord(), headerOrder.get(i-1).ord()) = Int.parse(currLine.get(i));
            }
        }

        // run algorithm and print results
        Console.OUT.println("==================== Memoized Smith-Waterman ==================");
        
        // run parallel Smith-Waterman
        var startTime:Long = System.nanoTime();
        parallelMatch(string1, string2, substitution, gapOpening, gapExtension, cutoff);
        var finalTime:Long = System.nanoTime() - startTime;
        Console.OUT.println("Cutoff = " + cutoff + " ----- Size = " + string1.length());
        Console.OUT.println("Parallel Runtime: " + finalTime/1000000.0 + "ms");

        // run sequential Smith-Waterman
        startTime = System.nanoTime();
        match(string1, string2, substitution, gapOpening, gapExtension);
        finalTime = System.nanoTime() - startTime;
        Console.OUT.println("Sequential Runtime: " + finalTime/1000000.0 + "ms");
    }
    
    /**
     * Performs sequential Smith-Waterman scoring on {@code string1} and {@code string 2}.
     * Memoization adapted from <a href="https://www.cs.cmu.edu/~ckingsf/bioinfo-lectures/gaps.pdf">here</a>
     * @param string1 the first string
     * @param string2 the second string
     * @param substitution the substitution matrix
     * @param gapOpening the gap opening cost (negative value)
     * @param gapExtension the gap extension cost (negative value)
     */ 
    public static def match(string1:String, string2:String, 
            substitution:Array_2[Long], 
            gapOpening:Long, gapExtension:Long) {
        
        // score matrices (split for memoization)
        val bestLeftwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        val bestUpwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        val bestDiagonal = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        
        // matrix storing directions taken
        val directions = new Array_2[Long](string1.length() + 1, string2.length() + 1, -1);
        
        // the highest score encountered and its coordinates
        var globalMax:Long = Long.MIN_VALUE;
        var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);
        
        // for each row, for each col
        for (i in 1..(string1.length())) {
            for (j in 1..(string2.length())) {
                var max:Long = Long.MIN_VALUE;

                var firstChar:Char = string1.charAt(Int.operator_as(i - 1));
                var secondChar:Char = string2.charAt(Int.operator_as(j - 1));

                // calculate best possible score from diagonal
                bestDiagonal(i, j) = max(
                        bestLeftwards(i - 1, j - 1),
                        bestUpwards(i - 1, j - 1),
                        bestDiagonal(i - 1, j - 1));
                bestDiagonal(i, j) = bestDiagonal(i, j) + substitution(firstChar.ord(), secondChar.ord());
                if (bestDiagonal(i, j) < 0) bestDiagonal(i, j) = 0; // reset negative values to 0

                // calculate best possible score from upwards
                bestUpwards(i, j) = max(
                        gapOpening + bestDiagonal(i - 1, j),
                        gapOpening + bestLeftwards(i - 1, j),
                        gapExtension + bestUpwards(i - 1, j));
                bestUpwards(i, j) = Math.max(bestUpwards(i, j), bestUpwards(i - 1, j) + gapOpening);
                if (bestUpwards(i, j) < 0) bestUpwards(i, j) = 0;

                // calculate best possible score from leftwards
                bestLeftwards(i, j) = max(
                        gapOpening + bestDiagonal(i, j - 1),
                        gapExtension + bestLeftwards(i, j - 1),
                        gapOpening + bestUpwards(i, j - 1));
                bestLeftwards(i, j) = Math.max(bestLeftwards(i, j), bestLeftwards(i, j - 1) + gapOpening);
                if (bestLeftwards(i, j) < 0) bestLeftwards(i, j) = 0;

                // find max of the three matrices and set direction
                if (bestDiagonal(i, j) >= bestLeftwards(i, j) && bestDiagonal(i, j) >= bestUpwards(i, j)) {
                    directions(i, j) = 0;
                    max = bestDiagonal(i, j);
                } else if (bestLeftwards(i, j) >= bestDiagonal(i, j) && bestLeftwards(i, j) >= bestUpwards(i, j)) {
                    directions(i, j) = -1;
                    max = bestLeftwards(i, j);
                } else {
                    directions(i, j) = 1;
                    max = bestUpwards(i, j);
                }

                // update globalMax if necessary
                if (max > globalMax) {
                    globalMax = max;
                    maxCoordinates = new Pair[Long, Long](i, j);
                }
            }
        }

        // run backtrack
        backtrack(string1, string2, bestDiagonal, directions, maxCoordinates);
    }


    /**
     * Performs parallel Smith-Waterman scoring on {@code string1} and {@code string 2}.
     * Memoization adapted from <a href="https://www.cs.cmu.edu/~ckingsf/bioinfo-lectures/gaps.pdf">here</a>
     * @param string1 the first string
     * @param string2 the second string
     * @param substitution the substitution matrix
     * @param gapOpening the gap opening cost (negative value)
     * @param gapExtension the gap extension cost (negative value)
     * @param cutoff the block length and width equating to workload of one thread
     */ 
    public static def parallelMatch(string1:String, string2:String,
            substitution:Array_2[Long],
            gapOpening:Long, gapExtension:Long,
            cutoff:Long) {

        // score matrices (split for memoization)
        val bestLeftwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        val bestUpwards = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        val bestDiagonal = new Array_2[Long](string1.length() + 1, string2.length() + 1, 0);
        
        // matrix storing directions taken
        val directions = new Array_2[Long](string1.length() + 1, string2.length() + 1, -1);

        // number of rows and columns of blocks, determined by ceil(string length divided by block length)
        var maxRow:Long = Int.operator_as(Math.ceil(Double.implicit_operator_as(string1.length()) / cutoff));
        var maxCol:Long = Int.operator_as(Math.ceil(Double.implicit_operator_as(string2.length()) / cutoff));

        // the highest score encountered and its coordinates
        var globalMax:Long = Long.MIN_VALUE;
        var maxCoordinates:Pair[Long, Long] = new Pair[Long, Long](0, 0);

        // for each stride
        for(stride in 1..(maxRow + maxCol)) {
            
            // get start column index of current stride
            var startCol:Long = 0;
            if (stride - maxRow > 0) {
                startCol = stride - maxRow;
            }

            // get number of blocks in the current stride
            var numBlocks:Long = stride < maxCol - startCol ? stride : maxCol - startCol;
            numBlocks = numBlocks < maxRow ? numBlocks : maxRow;

            /*************************** Parallel Component **************************/
            finish for(k in 0..(numBlocks - 1)) async {
                
                // get row and column index of current block
                var i:Long = maxRow;
                if (maxRow > stride) {
                    i = stride;
                }
                i = i - k ;
                var j:Long = startCol + k + 1 ;


                // scale block indices, i and j, to become cell indices
                i = (i - 1) * cutoff + 1;
                j = (j - 1) * cutoff + 1;
                
                // set ending cell indices of current block
                var cellMaxRow:Long = i + cutoff - 1;
                var cellMaxCol:Long = j + cutoff - 1;

                // ensure cell indices do not exceed size of matrix
                if (cellMaxRow > string1.length()) {
                    cellMaxRow = string1.length();
                }
                if (cellMaxCol > string2.length()) {
                    cellMaxCol = string2.length();
                }

                // for each cell in the block
                for (a in i..(cellMaxRow)) {
                    for (b in j..(cellMaxCol)) {

                        // run sequential calculation of score (see match() for comments}
                        var max:Long = Long.MIN_VALUE;

                        var firstChar:Char = string1.charAt(Int.operator_as(a - 1));
                        var secondChar:Char = string2.charAt(Int.operator_as(b - 1));

                        bestDiagonal(a, b) = max(
                                bestLeftwards(a - 1, b - 1),
                                bestUpwards(a - 1, b - 1),
                                bestDiagonal(a - 1, b - 1));
                        bestDiagonal(a, b) = bestDiagonal(a, b) + substitution(firstChar.ord(), secondChar.ord());
                        if (bestDiagonal(a, b) < 0) bestDiagonal(a, b) = 0;

                        bestUpwards(a, b) = max(
                                gapOpening + bestDiagonal(a - 1, b),
                                gapOpening + bestLeftwards(a - 1, b),
                                gapExtension + bestUpwards(a - 1, b));
                        bestUpwards(a, b) = Math.max(bestUpwards(a, b), bestUpwards(a - 1, b) + gapOpening);
                        if (bestUpwards(a, b) < 0) bestUpwards(a, b) = 0;

                        bestLeftwards(a, b) = max(
                                gapOpening + bestDiagonal(a, b - 1),
                                gapExtension + bestLeftwards(a, b - 1),
                                gapOpening + bestUpwards(a, b - 1));
                        bestLeftwards(a, b) = Math.max(bestLeftwards(a, b), bestLeftwards(a, b - 1) + gapOpening);
                        if (bestLeftwards(a, b) < 0) bestLeftwards(a, b) = 0;


                        if (bestDiagonal(a, b) >= bestLeftwards(a, b) && bestDiagonal(a, b) >= bestUpwards(a, b)) {
                            directions(a, b) = 0;
                            max = bestDiagonal(a, b);
                        } else if (bestLeftwards(a, b) >= bestDiagonal(a, b) && bestLeftwards(a, b) >= bestUpwards(a, b)) {
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

        // run backtrack
        backtrack(string1, string2, bestDiagonal, directions, maxCoordinates);
    }
    
    /**
     * Performs the backtrack of the Smith-Waterman algorithm.
     * Prints the identity, gaps, score and resultant strings.
     * @param string1 the first string
     * @param string2 the second string
     * @param matrix the score matrix
     * @param directions the direction matrix
     * @param maxCoordinates the (i, j) of the highest score in {@code matrix}
     */
    public static def backtrack(string1:String, string2:String,
            matrix:Array_2[Long], directions:Array_2[Long],
            maxCoordinates:Pair[Long, Long]) {
        var i:Long = maxCoordinates.first;
        var j:Long = maxCoordinates.second;
        var result1:String = "";
        var result2:String = "";

        var stringLength:Long = 0;
        var matchCount:Long = 0;
        var gapCount:Long = 0;
        while (matrix(i, j) != 0) {
            // if direction is diagonal
            if (directions(i,j) == 0) {
                result1 = string1.charAt(Int.operator_as(i - 1)) + result1;
                result2 = string2.charAt(Int.operator_as(j - 1)) + result2;
                if (string1.charAt(Int.operator_as(i - 1)) == string2.charAt(Int.operator_as(j - 1))) {
                    matchCount += 1;
                }
                i -= 1;
                j -= 1;
                stringLength += 1;
            }
            // if direction is upwards
            else if (directions(i, j) > 0) {
                // add gap
                for (k in (0..(directions(i, j) - 1))) {
                    result2 = '-' + result2;
                    result1 = string1.charAt(Int.operator_as(i - k - 1)) + result1;
                    stringLength += 1;
                }
                gapCount += directions(i, j);
                i -= directions(i, j);
            }
            // if direction is leftwards
            else {
                // add gap
                for (k in (0..(-directions(i, j) - 1))) {
                    result1 = '-' + result1;
                    result2 = string2.charAt(Int.operator_as(j - k - 1)) + result2;
                    stringLength += 1;        
                }
                gapCount -= directions(i, j);
                j += directions(i, j); 
            }
        }

        // print results
        Console.OUT.println("Identity: " + matchCount + "/" + stringLength);
        Console.OUT.println("Gaps: " + gapCount + "/" + stringLength);
        Console.OUT.println("Score: " + matrix(maxCoordinates.first, maxCoordinates.second));
        Console.OUT.println(result1);
        Console.OUT.println(result2);
    }

    /**
     * Helper method to calculate the max of {@code first}, {@code second} and {@code third}.
     */
    private static def max(first:Long, second:Long, third:Long) {
        if (first >= second && first >= third) {
            return first;
        } else if (second >= third && second >= first) {
            return second;
        } else {
            return third;
        }
    }
    
    /**
     * Helper method that delimits a space-separated string {@code lineToSplit} and returns an array of tokens.
     */
    private static def splitString(lineToSplit:String) {
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

    /**
     * Helper method that prints {@code matrix} of {@code nRows} and {@code nCols}.
     */
    private static def printMatrix(matrix:Array_2[Long], nRows:Long, nCols:Long) {
        for (i in 0..(nRows - 1)) {
            for (j in 0..(nCols - 1)) {
                Console.OUT.println(matrix(i, j) + " ");
            }
            Console.OUT.println();
        }
    }
}
