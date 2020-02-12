#!/bin/bash
mv ./phpmyadmin.conf /etc/nginx/sites-available/
mv ./wordpress.conf /etc/nginx/sites-available/
ln -s /etc/nginx/sites-available/phpmyadmin.conf /etc/nginx/sites-enabled/phpmyadmin.conf
ln -s /etc/nginx/sites-available/wordpress.conf /etc/nginx/sites-enabled/wordpress.conf
