# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 15:54:05 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/22 16:17:55 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:latest

RUN apt-get update -y && \
	apt-get upgrade -y && \
	# apt-get apt-utils -y && \
	apt-get install -y build-essential && \
	apt-get install -y vim && \
	apt install wget -y && \
	apt-get install -y git
