
CC = c++

SCRS = main.cpp Ice.cpp Cure.cpp AMateria.cpp Character.cpp MateriaSource.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = AMateria

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)