CC = c++

SCRS = AForm.cpp Bureaucrat.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp main.cpp Intern.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Intern

all: $(NAME)

$(NAME) : $(SCRS)
	$(CC) $(CFLAGS) -o $(NAME) $(SCRS)

fclean:
	rm -rf $(NAME)