#!/bin/bash
SCRIPT=pack.sh
echo "#!/bin/bash" > $SCRIPT
echo "sqlplus $DB_NAME <<EOF"  >> $SCRIPT

line=`ls sql_files/*.sql | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT

line=`ls sql_files/*.spc | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT

line=`ls sql_files/*.bdy | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT

line=`ls sql_files/*.fnc | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT

line=`ls sql_files/*.prc | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT

line=`ls sql_files/*.fnc | sed -e 's/^/@/'`
echo "$line"  >> $SCRIPT


echo "exit" >> $SCRIPT
echo  "EOF" >> $SCRIPT

chmod +x $SCRIPT
