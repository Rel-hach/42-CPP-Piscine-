EXECUTABLE = ClapTrap

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp ClapTrap.cpp

OBJECT = $(SOURCE:.cpp=.o)

INCLUDE = ClapTrap.hpp

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) $(INCLUDE)
	$(CPP) $(CPPFLAGS) $(OBJECT) -o $(EXECUTABLE)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all