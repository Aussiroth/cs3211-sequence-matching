#!/bin/bash

# Parameters: 1. outputname 2. number of iterations

sizes=(1 2 4 8 16 32 64 128)
threads=(1 2 4 8 16 32)
outputname=$1
iterations=$2

for i in "${sizes[@]}"
do
	for j in "${threads[@]}"
	do
		echo "size: $i, threads: $j" >> $outputname$i
		export OMP_NUM_THREADS=$j
		for k in {1..10}
		do
			# echo "iteration $k out of $iterations" >> $outputname$i
			eval "~/Downloads/mm-shmem" $i 2>> $outputname$i
		done
	done
done

