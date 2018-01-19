#!/bin/sh
arr=( $1 $2 $3 $4 $5 $6 $7 $8 )
for (( i=0; i<${#arr[@]}; i++))
do
    min=$i
    for (( j=i+1; j<${#arr[@]}; j++))
    do
	if [ ${arr[j]} -lt ${arr[min]} ]; then
	min=$j
	fi
    done
    temp=${arr[i]}
    arr[i]=${arr[min]}
    arr[min]=$temp
done

for i in ${arr[@]}
do
    echo $i
done
