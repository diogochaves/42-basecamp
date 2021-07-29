cat /etc/passwd | \
grep -v '\#' | \
sed -n 'n;p' | \
cut -d ':' -f 1 | \
rev | \
sort -r | \
sed -n -e "$FT_LINE1, $FT_LINE2 p" | \
paste -s -d "," | \
sed -e 's/,/, /g' | \
sed -e  's/$/./' | \
tr -d "\n"