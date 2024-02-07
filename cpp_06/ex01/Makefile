CC = c++

SCRS = main.cpp Serializer.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serializer

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)