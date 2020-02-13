# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2020/02/13 16:45:31 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libshell.a
SRC = *.c
all: $(NAME)

compile: 
	gcc -Wall -Wextra -Werror -c $(SRC)
$(NAME): compile
	ar rc $(NAME) *.o 
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re : fclean all

