# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2019/12/03 22:32:38 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

SRC = ft_addtop.c ft_check_all.c ft_convertion.c ft_ctoa.c ft_free.c ft_is_flage.c ft_isdigit.c ft_itoa.c ft_itox.c ft_printf.c ft_putstr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_uitoa.c

all:
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) *.o 
	@ranlib $(NAME)
clean:
	@rm -f *.o
fclean: clean
	@rm -f libprintf.a
re : fclean all

