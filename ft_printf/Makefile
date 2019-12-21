# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2019/12/21 11:52:52 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_addtop.c ft_all.c ft_atoi.c ft_check_all.c ft_convertion.c ft_ctoa.c \
	  ft_finish1.c ft_finish2.c ft_free.c ft_is_flage.c ft_isdigit.c ft_itoa.c \
	  ft_itox.c ft_minus.c ft_printf.c ft_putstr.c ft_space.c ft_strdup.c \
	  ft_strjoin.c ft_strlen.c ft_uitoa.c ft_zero.c ft_swap.c

all:
	gcc -g -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) *.o 
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f libprintf.a
re : fclean all

