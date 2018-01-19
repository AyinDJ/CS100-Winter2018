#!/bin/sh
if [ $# -ne 3 ]; then
	echo "Invalid number of parameters"
else
	if [ $1 -ge $2 -a $1 -ge $3 ]; then
		echo $1
	elif [ $2 -ge $1 -a $2 -ge $3 ]; then
		echo $2
	else
		echo $3
	fi
fi
