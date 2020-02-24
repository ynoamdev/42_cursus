# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:03:31 by ynoam             #+#    #+#              #
#    Updated: 2020/02/15 20:20:29 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libcommand.a
SRC = *.c

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRC) ../libft/libft.a
	ar rc $(NAME) *.o 
	ranlib $(NAME)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

