# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 11:07:07 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/22 14:37:59 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian

RUN apt-get -y update && \
	apt-get -y upgrade && \
	apt install -y wget && \
	apt install -y bzip2

RUN	wget http://dl.4players.de/ts/releases/3.4.0/teamspeak3-server_linux_amd64-3.4.0.tar.bz2 && \
	tar xvf teamspeak3-server_linux_amd64-3.4.0.tar.bz2 && \
	mkdir /home/teamspeak && \
	cd teamspeak3-server_linux_amd64 && mv * /home/teamspeak && cd .. && rm -rf teamspeak3* && \
	adduser --disabled-login teamspeak && \
	touch /home/teamspeak/.ts3server_license_accepted  && \
	chown -R teamspeak:teamspeak /home/teamspeak

ENV TS3SERVER_LICENSE=accept
USER teamspeak

EXPOSE	9987/udp 
EXPOSE	10011 
EXPOSE	30033

ENTRYPOINT sh /home/teamspeak/ts3server_minimal_runscript.sh start


# docker build . -t ex01
# docker run -it --name ts -p 9987:9987/udp -p 30033:30033 -p10011:10011 --rm ex01
# https://www.vultr.com/docs/how-to-install-teamspeak-3-server-on-ubuntu-16-04-64-bit
