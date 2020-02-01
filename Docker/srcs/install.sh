#!/bin/bash
apt-get install -y vim 
apt-get install -y man 
apt-get install -y curl
apt-get install -y wget
apt-get install -y nginx
apt install -y php-json php-mbstring
wget https://files.phpmyadmin.net/phpMyAdmin/4.9.0.1/phpMyAdmin-4.9.0.1-all-languages.tar.gz
tar -zxvf phpMyAdmin-4.9.0.1-all-languages.tar.gz
mv phpMyAdmin-4.9.0.1-all-languages/  /usr/share/phpMyAdmin
rm -rf phpMyAdmin-4.9.0.1-all-languages.tar.gz
