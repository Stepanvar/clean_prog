i=$1
c=0
while :
do
	c=$((c+1))
	termux-toast -b black -g bottom "Time up $c"
	termux-vibrate -f -d 1000
	sleep 80
done

