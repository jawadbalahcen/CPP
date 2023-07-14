
CC = c++

SCRS = main.cpp ClapTrap.cpp ScavTrap.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = ScavTrap

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)