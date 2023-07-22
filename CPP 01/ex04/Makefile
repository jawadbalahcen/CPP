
CC = clang++

SCRS = main.cpp FindReplace.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = replace

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)