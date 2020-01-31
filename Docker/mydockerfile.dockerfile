FROM debian:buster
RUN mkdir /root/mywork
COPY ./srcs/install.sh /root/mywork
WORKDIR /root/mywork
RUN chmod u+x ./install.sh
RUN ./install.sh