#!/bin/bash
wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb
apt install -y ./mysql-apt-config_0.8.13-1_all.deb
apt update
apt install mysql-server