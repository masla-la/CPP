NAME = main

A = Cat Dog Animal WrongCat WrongAnimal Brain

FILES = main $(ASRC)

ASRC = $(addprefix Src/, $(A))
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
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
.SILENT: