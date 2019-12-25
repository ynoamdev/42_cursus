# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2019/12/24 09:24:17 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_addtop.c ft_all.c ft_atoi.c ft_change.c ft_convertion.c ft_ctoa.c \
	ft_f1.c ft_free.c ft_init.c ft_is_flage.c ft_isdigit.c ft_itoa.c ft_itox.c \
	ft_minus.c ft_p.c ft_printf.c ft_putstr.c ft_space.c ft_strdup.c \
	ft_strjoin.c ft_strlen.c ft_uitoa.c ft_zero.c ft_d_u_i.c
all:
	gcc -g -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) *.o 
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f libprintf.a
re : fclean all

