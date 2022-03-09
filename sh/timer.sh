#!/bin/zsh
#HELP
Help(){
	echo "NAME"
	echo "	timer.sh - timer with modifiable cycle"
	echo "SYNOPSIS:"
	echo -e "	timer.sh [-d \e[3mduration\e[0m] [-h]"
	echo "Descriprion"
	echo "	-d \e[3mduration\e[0m	the duration of the one timer cycle in sec (default 80)"
	echo "	-h	print this help"
}

#Set var
c=0
dur=80
h=0
m=0
s=0
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
	termux-vibrate -f -d 500
done
}
#MAIN
while getopts ":hd:" option; do
	case $option in
		h) #display help
			Help
			exit;;
		d) #run timer with user duration
			dur=$OPTARG;;
		\?) #invalid option
			echo "\e[31mERROR\e[0m: Invalid option"
		esac
	done
Timer
