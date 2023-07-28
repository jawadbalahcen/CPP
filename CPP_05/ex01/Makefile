CC = c++

SCRS = main.cpp Bureaucrat.cpp Form.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Form

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)