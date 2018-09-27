# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/23 16:30:16 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/24 11:00:44 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ubuntu

EXPOSE 3000
EXPOSE 8022

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get install git -y && \
    apt-get install wget -y && \
    apt-get install -y build-essential && \
    apt-get install gcc -y

RUN wget https://dl.gogs.io/0.11.66/gogs_0.11.66_linux_amd64.tar.gz && \
    tar -xvf gogs_0.11.66_linux_amd64.tar.gz && \
    cd gogs

ENV USER=root

WORKDIR /gogs

ENTRYPOINT ./gogs web

# docker build . -t ex03
# docker run --name gogtest -p 3000:3000 --rm -it ex03