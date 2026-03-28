NAME = bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

HEADER = Bureaucrat.hpp AForm.hpp ShruberryCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShruberryCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

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
	# remove files ending with shruberry
	rm -f -- *_shrubbery

re: fclean all

.PHONY: all clean fclean re
