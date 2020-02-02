#!/bin/bash
tar -zxvf phpMyAdmin-4.9.0.1-all-languages.tar.gz
tar -xzvf latest.tar.gz
mv phpMyAdmin-4.9.0.1-all-languages/  /usr/share/phpMyAdmin
rm -rf phpMyAdmin-4.9.0.1-all-languages.tar.gz
mv ./phpmyadmin.conf /etc/nginx/sites-available/
ln -s /etc/nginx/sites-available/phpmyadmin.conf /etc/nginx/sites-enabled/phpmyadmin.conf
