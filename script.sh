#!bin/bash

max=100
for((i=0; i < $max; i++))
do
	arg=$(seq 0 999 | sort -R)
	./push_swap $arg | wc -l
done

#wc -l | awk '{if ($1 > 11)print $1, endif}'

#./checker_Mac $arg