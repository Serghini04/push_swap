#!bin/bash

max=1000
for((i=0; i < $max; i++))
do
	arg=$(seq 1 12 | sort -R)
	./push_swap $arg | ./checker $arg
done

#wc -l | awk '{if ($1 > 11)print $1, endif}'

#./checker_Mac $arg