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
 apt install lsb-release
 mv .bashrc ..
 mv default.nginx /etc/nginx/sites-available/default
 
#
## Install php
#
 apt install -y php7.3-fpm
 apt install -y php7.3-mysql
 apt update

#
## Installe Phpmyadmin
#
 bash phpmyadmin.sh
 apt update

#
## Installe wordpress
#
 bash wordpress.sh
 apt update

rm -fr phpMyAdmin-4.9.4-all-languages.tar.gz
