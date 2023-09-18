# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 10:50:18 by masla-la          #+#    #+#              #
#    Updated: 2023/09/14 10:50:18 by masla-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

A = Data Serializer

FILES = main\
		$(ASRC)

ASRC = $(addprefix Src/, $(A))
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

CC = c++
CFLAGS = -Wall -Werror -Werror -std=c++98
RM = rm -rf

all: $(NAME)

.c.o: $(SRC)
		@$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
		@echo "Done"

clean:
		@$(RM) $(OBJ)
		@echo "Clean"

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT:% 