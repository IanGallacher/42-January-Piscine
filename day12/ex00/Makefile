# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igallach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 13:43:46 by igallach          #+#    #+#              #
#    Updated: 2018/01/25 16:23:08 by igallach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: 
	gcc src/*.c -Iinclude/ -Wall -Wextra -Werror -o ft_display_file

fclean: clean
	rm -f ft_display_file

re: fclean all

clean:
	find ./ -name "*.o" -delete;
