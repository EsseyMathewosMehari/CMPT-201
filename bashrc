# Sample .bashrc for SuSE Linux
# Copyright (c) SuSE GmbH Nuernberg

# There are 3 different types of shells in bash: the login shell, normal shell
# and interactive shell. Login shells read ~/.profile and interactive shells
# read ~/.bashrc; in our setup, /etc/profile sources ~/.bashrc - thus all
# settings made here will also take effect in a login shell.
#
# NOTE: It is recommended to make language settings in ~/.profile rather than
# here, since multilingual X sessions would not work properly if LANG is over-
# ridden in every subshell.

# Some applications read the EDITOR variable to determine your favourite text
# editor. So uncomment the line below and enter the editor of your choice :-)
#export EDITOR=/usr/bin/vim
#export EDITOR=/usr/bin/mcedit

# For some news readers it makes sense to specify the NEWSSERVER variable here
#export NEWSSERVER=your.news.server

# If you want to use a Palm device with Linux, uncomment the two lines below.
# For some (older) Palm Pilots, you might need to set a lower baud rate
# e.g. 57600 or 38400; lowest is 9600 (very slow!)
#
#export PILOTPORT=/dev/pilot
#export PILOTRATE=115200

test -s ~/.alias && . ~/.alias || true

#--------------- END OF ORIGINAL .bashrc FILE ---------------


# create a custom colored prompt (PM)
PS1='\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;36m\]\w \$\[\033[00m\] '

# create a custom xterm window title (PM, see tldp.org/HOWTO/Xterm-Title-4.html)
case $TERM in
    xterm*)
        PS1="\[\033]0;\u@\h: \w\007\]$PS1"
        ;;
    *)
        ;;
esac

# Some more alias to avoid making mistakes: (PM)
  alias rm='rm -i'
  alias cp='cp -i'
  alias mv='mv -i'

# Other aliases are defined in /etc/profile.d/ls.bash and /etc/profile.d/alias.bash

