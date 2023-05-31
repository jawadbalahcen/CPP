
CC = clang++

SCRS = main.cpp Harl.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)