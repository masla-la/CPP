NAME = main

A = AMateria Character Ice Cure MateriaSource

FILES = main $(ASRC)

ASRC = $(addprefix Src/, $(A))
SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

CC = clang++
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
.SILENT: