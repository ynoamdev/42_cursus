#!/bin/bash

#
##  Installe vim man git curl wget gcc tmux ...
#
 apt-get install -y nginx
 apt-get install -y vim 
 apt-get install -y man 
 apt-get install -y git
 apt-get install -y curl
 apt-get install -y wget
 apt-get install -y gcc
 apt-get install -y tmux
 apt-get install -y zip
 apt-get install -y ps
 apt update
 mv .bashrc ..
 mv default.nginx /etc/nginx/sites-available/default
 
#
## Install php
#
 apt install -y php7.3-fpm
 apt install -y php7.3-mysql

#
## Installe Phpmyadmin
#
#bash phpmyadmin.sh

#
## Installe wordpress
#
# bash wordpress.sh
