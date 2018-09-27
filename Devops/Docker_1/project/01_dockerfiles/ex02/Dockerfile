# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/23 13:30:41 by pstubbs           #+#    #+#              #
#    Updated: 2018/09/24 13:31:21 by pstubbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM ft-rails:on-build

EXPOSE 3000
CMD [ "rails" , "s", "-b", "0.0.0.0", "-p", "3000"]

# docker build -t ft-rails:on-build ./ft-rails
# docker build -t ex02 .
# docker run -p 3000:3000 -i -d ex02