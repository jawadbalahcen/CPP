
CC = clang++

SCRS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)