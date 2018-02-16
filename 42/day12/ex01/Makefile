# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igallach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 13:43:46 by igallach          #+#    #+#              #
#    Updated: 2018/01/25 19:05:21 by igallach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

binary_name = ft_cat

all: 
	gcc src/*.c -Iinclude/ -Wall -Wextra -Werror -o $(binary_name)

fclean: clean
	rm -f $(binary_name) 

re: fclean all

clean:
	find ./ -name "*.o" -delete;
