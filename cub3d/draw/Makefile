# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam </var/mail/ynoam>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 22:45:25 by ynoam             #+#    #+#              #
#    Updated: 2020/10/21 20:40:11 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
NAME = wolf
SRC = *.c ../read_file/*.c ../libft/*.c
CC = gcc -Werror -Wall -Wextra $(SRC)\
	 -fsanitize=address\
	 -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(SRC) cub3d.h Makefile
	$(CC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

run:
	./wolf ../maps/map2.cub
