
CC = c++

SCRS = main.cpp Fixed.cpp bsp.cpp Point.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = Point

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)