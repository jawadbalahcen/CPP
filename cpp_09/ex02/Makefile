
SRC = main.cpp PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

NAME = PmergeMe

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all : $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)