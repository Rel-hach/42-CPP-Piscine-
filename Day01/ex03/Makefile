EXECUTABLE = Zombie

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJECT	= $(SOURCE:.cpp=:.o)

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCE)
	$(CPP) $(CPPFLAGS) $(SOURCE) -o $(EXECUTABLE)

fclean:
	rm -rf $(EXECUTABLE)

re: fclean all

./PHONY: clean fclean all re 