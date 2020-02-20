FROM		debian:buster

RUN			apt update
RUN			apt-get -y upgrade
RUN         mkdir /root/mywork
COPY        ./srcs/*  /root/mywork/
WORKDIR		/root/mywork/
RUN         bash install.sh
