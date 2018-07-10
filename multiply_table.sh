#!/bin/bash
#n = $0
for((i = 1; i < 10; i++))
do
	for((j = 1; j <= i; j++))
		do
			num=$(($i*$j))
			printf "$j*$i=${num}\t"
		done
	printf '\n'
done
exit 0
