FROM		debian:buster
RUN			apt update
RUN			apt-get -y upgrade
COPY        ./srcs/install.sh /root
RUN         chmod u+x /root/install.sh
RUN         bash /root/install.sh
