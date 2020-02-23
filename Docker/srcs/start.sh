#!/bin/bash

chown -R mysql:mysql /var/lib/mysql
service php7.3-fpm start
service mysql start
nginx -g 'daemon off;'
service nginx restart
