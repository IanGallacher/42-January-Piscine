# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igallach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 13:43:46 by igallach          #+#    #+#              #
#    Updated: 2018/01/22 15:12:03 by igallach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: 
	gcc -c srcs/*.c -Iincludes/ -Wall -Wextra -Werror; ar rc libft.a *.o

fclean: clean
	rm -f *.a

re: fclean all

clean:
	find ./ -name "*.o" -delete;
