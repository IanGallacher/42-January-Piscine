#!/bin/sh
FT_BASE1=\'\\\"?!
FT_BASE2=mrdoc
FT_BASE3="gtaio luSnemf"

#convert \ to /, tr to swap to numbers, convert base, add, convert base, swap back to letters
echo "$FT_NBR1 + $FT_NBR2" | sed 's/\\/\//g' | tr $( echo $FT_BASE1 | sed 's/\\/\//g') 01234 | tr $FT_BASE2 01234 | xargs echo "ibase=5;" | bc | xargs echo "obase=13;" | bc | tr 0123456789ABC "$FT_BASE3"

