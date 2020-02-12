#!/bin/bash
#
##   this is my installlation 
#
 bash install.sh
#
##   Installe Nginx - Configure Nginx 
#
 bash nginx-install.sh
 mv default.nginx etc/nginx/sites-available/default
#
##   Installe Phpmyadmin - Configure Phpmyadmin
#
 bash phpmyadmin-install.sh
 bash phpmyadmin-config.sh
