#!/bin/bash 

#
## Installe VIM MAN GIT CURL WGET GCC TMUX ...
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
 apt-get install -y expect
 apt-get install -y php-fpm
 apt-get install -y php-mysql
 apt-get install -y lsb-release gnupg
 mv default /etc/nginx/sites-available/default
 mv .bashrc ..
 apt update

#
## Installe PHPMYADMIN
#
 wget  https://files.phpmyadmin.net/phpMyAdmin/4.9.4/phpMyAdmin-4.9.4-all-languages.tar.gz
 tar -xvf phpMyAdmin-4.9.4-all-languages.tar.gz
 mv phpMyAdmin-4.9.4-all-languages /var/www/html/phpmyadmin

#
## Installe WORDPRESS
#
 wget http://wordpress.org/latest.tar.gz
 tar -xvf latest.tar.gz
 mv wordpress /var/www/html/
 mv wp-config.php /var/www/html/wordpress
 chown -R www-data:www-data /var/www/html/wordpress
 chmod 755 -R /var/www/html/wordpress

#
## Installe MySQL
#
 wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb
 apt update
 expect exp.exp
 service mysql start
 mysql -u root -proot -e "GRANT ALL PRIVILEGES ON *.* TO 'ynoam'@'localhost' IDENTIFIED BY 'ynoam';"
 mysql -u root -proot -e "CREATE DATABASE db;"
 mysql -u root -proot db < db.sql
 apt update

#
## Installe SSL
#

 mkdir /etc/nginx/ssl
 chmod 755 /etc/nginx/ssl

 rm -fr phpMyAdmin-4.9.4-all-languages.tar.gz
 rm -fr latest.tar.gz
 rm -fr mysql-apt-config_0.8.13-1_all.deb
