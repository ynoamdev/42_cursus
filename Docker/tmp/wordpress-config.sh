#!/bin/bash
mv wordpress /var/www/html/
chown -R www-data:www-data /var/www/html/wordpress
chmod 755 -R /var/www/html/wordpress