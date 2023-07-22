
CC = clang++

SCRS = main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = reference

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)