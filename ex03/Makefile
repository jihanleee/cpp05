NAME = a.out
FLAGS = -Wall -Wextra -Werror -std=c++98 -I $(INC) -g3

CC = c++

INC = ./headers/

SRCS = \
srcs/Bureaucrat.cpp \
srcs/AForm.cpp \
srcs/main.cpp \
srcs/PresidentialPardonForm.cpp \
srcs/ShrubberyCreationForm.cpp \
srcs/RobotomyRequestForm.cpp

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	rm -f *.o */*.o

fclean : clean
	rm -f $(NAME)
	rm -f *_shrubbery
re : fclean all

.PHONY : clean fclean all re
