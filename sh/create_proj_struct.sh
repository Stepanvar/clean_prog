#!/bin/zsh
DIR=~/clean_prog/sh/
if [ -z $1 ]
then
	echo 'run this script in the needed directory and send as an argument directory name and path to your lib or re to renew Makefile'
else
	if [ $1 = "re" ]
	then
		pwd='pwd' && zsh ~/clean_prog/sh/create_proj_struct.sh $(pwd)&& make re
	else
		mkdir -p $1
		mkdir -p $1/src $1/bin $1/deps $1/libs
		if [ -z $2 ]
		then
			echo "no libs specified"
		else
			cp -rp $2 $1/libs
		fi
		echo "BASENAME	= $1" > $1/Makefile
		tail -n+2 $DIR/Makefile >> $1/Makefile
	fi
fi

