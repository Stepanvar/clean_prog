#!/bin/zsh
#install ohmy-zsh
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
set > var.txt
#set vars for different os
if grep 'termux' var.txt > t.txt; then
	echo 'termux'
	wd=~/../
	mp=pkg
else
	echo 'linux'
	wd=/
	mp=aptittude
fi
ls $wd/usr/bin > pack.txt
rm var.txt t.txt pack.txt
#add terminal configure commands
echo 'alias src="source ~/.zshrc"
alias ll="ls -Fla"
alias upgd="pkg update && pkg upgrade"
0p(){
	git add .
	git commit -m "$1"
	git push origin $(git symbolic-ref HEAD --short)
}' >> ~/.zshrc
#add vim plugins
mkdir -p ~/.vim && mkdir ~/.vim/plugins
git clone \
	git://github.com/jiangmiao/auto-pairs.git \
	~/.vim/plugins/auto-pairs
git clone \
	https://github.com/907th/vim-auto-save \
	~/.vim/plugins/vim-auto-save
#add vim configures commands
echo '" Disable compatibility with vi which can cause unexpected issues.
set nocompatible

" Enable type file detection. Vim will be able to try to detect the type of file in use.
filetype on

" Enable plugins and load plugin for the detected file type.
filetype plugin on

" Load an indent file for the detected file type.
filetype indent on

" Turn syntax highlighting on.
syntax on

" Add numbers to each line on the left-hand side.
set number
"auto save
let g:auto_save = 1
let g:auto_save_events = ["InsertLeave", "TextChanged"]' >> ~/.vimrc
#update files
source ~/.zshrc
source ~/.vimrc
#end message
echo 'success'

