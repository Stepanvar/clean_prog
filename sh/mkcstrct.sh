#!/bin/zsh
DIR=~/clean_prog/sh/
#HELP
Help(){
	echo -e "NAME"
	echo -e "	mkcstrct - make your c project autocompilated and structurized"
	echo -e "SYNOPSIS:"
	echo -e "	make_c_struct.sh [-h] [-d \e[3mdirectory\e[0m] [-l \e[3mlibrary\e[0m]"
	echo -e "DESCRIPTION"
	echo -e "	-d \e[3mdirectory\e[0m] the directory you need to create or structurized"
	echo -e "	-l \e[3mlibrary\e[0m path to tye library you need to add in your c project"
	echo -e "	-h print this help"
}
dir=""
lib=""
#Mkstrct
Mkstrct(){
	mkdir -p $dir
	mkdir -p $dir/bin $dir/deps $dir/libs
	if [ -z $lib ]
	then
		echo "no libs specified"
	else
		cp -rp $lib $dir/libs
		lib="basename $lib"
		echo "BASENAME	= $lib" > $dir/Makefile
		tail -n+2 $DIR/Makefile >> $dir/Makefile
	fi
	echo "BASENAME	= $dir" > $dir/Makefile
	tail -n+2 $DIR/Makefile >> $dir/Makefile

}
#Main
while getopts ":hd:l:" option; do
	case $option in
		h) #display help
			Help
			exit;;
		d) #specify the directory
			dir=$OPTARG;;
		l) #specify library
			lib=$OPTARG;;
		\?) #invalid option
			echo "\e[31mERROR\e[0m: Invalid option"
		esac
	done
if [ -z $dir ]
then
	echo "no directory specified"
	Help
else
	Mkstrct
fi
