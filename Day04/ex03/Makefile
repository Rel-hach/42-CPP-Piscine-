COMPILE = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = AMateria.cpp \
		Cure.cpp \
		Ice.cpp \
		Character.cpp \
		MateriaSource.cpp \
		main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = materia

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: %.cpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all