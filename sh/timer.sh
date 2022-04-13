#!/bin/zsh
#HELP
Help(){
	echo "NAME"
	echo "	timer.sh - timer with modifiable cycle"
	echo "SYNOPSIS:"
	echo -e "	timer.sh [-d \e[3mduration\e[0m] [-h]"
	echo "Description"
	echo "	-d \e[3mduration\e[0m	the duration of the one timer cycle in sec (default 80)"
	echo "	-h	print this help"
}

#Set var
c=0
dur=80
h=0
m=0
s=0
event="Work"
#TIMER
Timer(){
while :
do
	sleep $dur
	c=$((c+1))
	pass=$(($c * $dur))
	h=$(($pass / 3600))
	m=$((($pass - $h * 3600) / 60))
	s=$((($pass - $h * 3600) % 60))
	termux-toast -b black -g bottom "Time passed: $h h $m m $s s"
	touch event.ign
	awk -v event="$event" 'BEGIN{regexp = event"($|.+$)"}{if ($0 !~ regexp) print $0}' event.ign > event1.ign
	mv event1.ign event.ign
	echo "${event}:	$h h $m m $s s" >> event.ign
	termux-vibrate -f -d 500
done
}
#MAIN
while getopts ":hd:e:" option; do
	case $option in
		h) #display help
			Help
			exit;;
		d) #run timer with user duration
			dur=$OPTARG;;
		e) #event type
			event=$OPTARG;;
		\?) #invalid option
			echo "\e[31mERROR\e[0m: Invalid option"
		esac
	done
Timer
