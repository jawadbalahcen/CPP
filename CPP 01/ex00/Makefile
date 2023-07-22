
CC = clang++

SCRS = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)