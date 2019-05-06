# cs3211-sequence-matching
CS3211 Parallel & Concurrent Programming AY18/19 Sem 2 Project 2  
Project Members: Alvin Yan, Au Liang Jun, Michael Hu  
The [Smith-Waterman algorithm](https://en.wikipedia.org/wiki/Smith%E2%80%93Waterman_algorithm) is a dynamic algorithm used for local sequence alignment of 2 strings, commonly used for nucleic acid sequences or protein sequences. In this project, we strive to parallelise the Smith-Waterman algorithm in an exercise of implementing concurrency and a study of its challenges. 

To draw insights on speedup, an implementation of the original sequential algorithm was also written. To reduce runtime of our code, we utilised memoization based off [known formulas](https://www.cs.cmu.edu/~ckingsf/bioinfo-lectures/gaps.pdf) modelling the affine gap, the gap penalty used in the algorithm. All code was written in the [x10 programming language](http://x10-lang.org/).
