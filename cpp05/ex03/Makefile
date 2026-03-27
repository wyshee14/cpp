NAME = bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

HEADER = Bureaucrat.hpp AForm.hpp ShruberryCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShruberryCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
