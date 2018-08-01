#!/bin/bash
while IFS='' read -r line || [[ -n "$line" ]]; do
    #echo "Text read from file: $line"
    if [[ $line = *"warning"* ]]; then
    	  echo $line >> warning.txt
	fi
done < "$1"
