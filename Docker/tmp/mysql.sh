#!/bin/bash

#debconf-set-selections <<< "mysql-apt-config mysql-apt-config/select-product select MySQL Server & Cluster"
#debconf-set-selections <<< "mysql-apt-config mysql-apt-config/select-server select mysql-5.7"
#debconf-set-selections <<< "mysql-apt-config mysql-apt-config/select-product select ok"
#debconf-set-selections <<< "mysql-server mysql-server/root_password password root"
#debconf-set-selections <<< "mysql-server mysql-server/root_password_again password root"
#wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb
#DEBIAN_FRONTEND=noninteractive dpkg -i mysql-apt-config_0.8.13-1_all.deb
#apt update
#DEBIAN_FRONTEND=noninteractive apt install -y mysql-server
export DEBIAN_FRONTEND=noninteractive
debconf-set-selections <<< 'mysql-apt-config mysql-apt-config/select-product select MySQL Server & Cluster'
debconf-set-selections <<< 'mysql-apt-config mysql-apt-config/select-server select mysql-5.7'
#wget http://repo.mysql.com/mysql-apt-config_0.8.13-1_all.deb
DEBIAN_FRONTEND=noninteractive dpkg -i mysql-apt-config_0.8.13-1_all.deb
apt-get update
DEBIAN_FRONTEND=noninteractive apt-get install -y mysql-server
