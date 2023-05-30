

SCRS = test.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = test

all: $(NAME)

$(NAME) : $(SCRS)
	c++ $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)