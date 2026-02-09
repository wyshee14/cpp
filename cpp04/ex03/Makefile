NAME = materia

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp

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
