
CC = c++

SCRS = Zombie.cpp main.cpp zombieHorde.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = HoredZombie

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)