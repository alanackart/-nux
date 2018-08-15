#!/bin/bash
#$1 is inputfile_name, $2 is x lines
in_file=$1
out_file=$1.added_commit
x_lines=$2

rm $out_file
touch $out_file

add_string="commit;"
match_string=");"

num=0
while IFS='' read -r line || [[ -n "$line" ]]; do
    echo $line >> $out_file
      if [[  $line = *$match_string ]];  then
        echo $add_string >> $out_file
      fi
done < $in_file
echo $add_string >> $out_file
