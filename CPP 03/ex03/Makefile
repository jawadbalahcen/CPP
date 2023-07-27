
CC = c++

SCRS = main.cpp ClapTrap.cpp ScavTrap.cpp fragTrap.cpp DiamondTrap.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

NAME = DiamondTrap

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)