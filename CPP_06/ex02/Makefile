CC = c++

SCRS = main.cpp Base.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Base

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)