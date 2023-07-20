
CC = clang++

SCRS = Account.cpp tests.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Account

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)