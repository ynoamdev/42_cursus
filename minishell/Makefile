# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2020/02/13 18:21:34 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libminishell.a

#
## Make the main library
#

all: $(NAME)

#
## Make the libft library
#

makelibft:
	(cp libft/*.c libft/libft.h .)
#
## Make the libshell library
#

makeshell:
	(cp shell/*.c shell/libshell.h .)
#
## Make the libcommand library
#

makecommand:
	(cp command/*.c command/libcommand.h .)

$(NAME): makelibft makeshell makecommand
	ar rc $(NAME) *.o 
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re : fclean all

