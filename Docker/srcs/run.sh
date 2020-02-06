#!/bin/bash
#
##   this is my installlation 
#
bash install.sh
#
##   Installe Nginx 
#
bash nginx-install.sh
#
##   Configure Nginx 
#
vim -s nginx-change-def.vim /etc/nginx/sites-available/default
#
##   ...
#
service  nginx start
