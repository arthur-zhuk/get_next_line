# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azhuk <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/20 17:04:16 by azhuk             #+#    #+#              #
#    Updated: 2016/10/20 19:01:33 by azhuk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

FLAG = -Wall -Werror -Wextra #-fsanitize=address -ggdb
LFLAGS = -L. -Llibft -lft

SRC = 	get_next_line.c \
		test_gnl.c

OBJ = $(SRC:.c=.o)
SRCDIR = src/
INCLUDE = libft

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	@ gcc -c $(FLAG) $(SRC) -I $(INCLUDE)
	@ gcc -o $(NAME) $(OBJ) $(LFLAGS)
	@ echo ~~ready~~

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
