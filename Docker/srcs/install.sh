#!/bin/bash
apt-get update
apt-get upgrade
apt-get install -y vim 
apt-get install -y man 
apt-get install -y curl
apt-get install -y wget
apt-get install -y nginx
apt-get install -y git
apt install -y php-json php-mbstring
wget https://files.phpmyadmin.net/phpMyAdmin/4.9.0.1/phpMyAdmin-4.9.0.1-all-languages.tar.gz
wget http://wordpress.org/latest.tar.gz
wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb
chmod u+x ./myconfig.sh
./myconfig.sh
