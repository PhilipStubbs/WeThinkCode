# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/23 15:16:55 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/24 11:09:08 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ubuntu

EXPOSE 25565

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt install -y default-jdk && \
    apt install -y screen && \
    apt install -y wget && \
	apt install -y bzip2

RUN mkdir minecraft && \
    cd minecraft && \
    wget -O minecraft_server.jar https://launcher.mojang.com/v1/objects/fe123682e9cb30031eae351764f653500b7396c9/server.jar

COPY eula.txt /minecraft/eula.txt

WORKDIR /minecraft

ENTRYPOINT java -jar minecraft_server.jar nogui
# ENTRYPOINT java -Xmx1024M -Xms1024M -jar minecraft_server.jar nogui


# docker build . -t mc

#For once off servers :
    # docker run --name mcserverTEST -p 25565:25565 --rm -it mc

# For persistent world :
    # docker volume create --name minecraft-server
    # docker run --name mcserverTEST -p 25565:25565 -v minecraft-server:/minecraft -it mc