# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 14:38:42 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/26 08:45:46 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ruby:2.2.2

RUN apt-get update && apt-get install -y mysql-client sqlite3 --no-install-recommends
RUN gem install rails --version 4.2.4

ENV RAILS_ENV=development

RUN mkdir -p /opt/app
WORKDIR /opt/app

ONBUILD ADD app /opt/app

ONBUILD RUN bundle install
ONBUILD RUN rake db:migrate
