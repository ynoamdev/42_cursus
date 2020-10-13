# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynoam </var/mail/ynoam>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/24 22:45:25 by ynoam             #+#    #+#              #
#    Updated: 2020/09/24 21:38:47 by ynoam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-fsanitize=address\

NAME = wolf
SRC = *.c ../read_file/*.c ../libft/*.c
CC= gcc -Werror -Wall -Wextra -g $(SRC)\
    -fsanitize=address\
    -I /usr/local/include -L /usr/local/lib/  -lmlx -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

run:
	./wolf ../maps/map2.cub
