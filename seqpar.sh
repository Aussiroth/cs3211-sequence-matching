#!/bin/bash

rm output*.txt

sizes='4096 8192'
cutoff=20
for size in $sizes
	do
	echo $size
	counter=1
	while [ $counter -le 3 ]
	do
		./SW first$size.txt second$size.txt BLOSUM62 2 1 >> output$size.txt
	((counter++))
	done
done
