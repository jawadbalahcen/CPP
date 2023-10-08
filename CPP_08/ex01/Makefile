CC = c++

SCRS = main.cpp Span.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Span

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)