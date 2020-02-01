FROM		debian:buster
RUN			apt update
RUN			apt-get -y upgrade
RUN         mkdir /root/mywork
COPY        ./srcs/install.sh /root/mywork/
RUN         chmod u+x /root/mywork/install.sh
WORKDIR		/root/mywork
RUN         bash install.sh

