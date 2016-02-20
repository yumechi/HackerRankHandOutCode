read n
for i in `seq 1 $n`;do
  read x y
  [ $x -le 0 ]&&x=$[-x]
  [ $y -le 0 ]&&y=$[-y]
  d=$[x-y]
  [ $d -le 0 ]&&d=$[-d]
  [ $d -le 1 ]&&echo "Possible"||echo "Impossible"
done
