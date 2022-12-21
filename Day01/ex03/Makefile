EXECUTABLE = Zombie

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJECT = $(SOURCE:.cpp=.o)

INCLUDE = Weapon.hpp HumanA.hpp HumanB.hpp

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) $(INCLUDE)
	$(CPP) $(CPPFLAGS) $(OBJECT) -o $(EXECUTABLE)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all

./PHONY: clean fclean all re 