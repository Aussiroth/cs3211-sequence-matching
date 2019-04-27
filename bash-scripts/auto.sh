#!/bin/bash

rm output*.txt

sizes='1024'
cutoffs='10 12 14 16 18 20 22 24 26 28 30 32'
for size in $sizes
do
	for cutoff in $cutoffs
	do
		echo $size $cutoff
		counter=1
		while [ $counter -le 3 ]
		do
			./MemoizedSW first$size.txt second$size.txt BLOSUM62 2 1 $cutoff >> output$size.txt
			((counter++))
		done
	done
done
