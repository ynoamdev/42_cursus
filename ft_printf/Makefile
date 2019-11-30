# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2019/11/30 10:55:54 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC = ft_atoi.c  ft_ctoa.c ft_free.c ft_itoa.c ft_itox.c ft_printf.c ft_putstr.c ft_strjoin.c ft_strlen.c  ft_strdup.c ft_addtop.c ft_uitoa.c


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

