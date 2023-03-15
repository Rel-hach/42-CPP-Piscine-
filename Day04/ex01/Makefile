EXECUTABLE = Animal

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = Animal.cpp Dog.cpp Cat.cpp  WrongAnimal.cpp WrongCat.cpp main.cpp

OBJECT = $(SOURCE:.cpp=.o)

INCLUDE = Dog.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Cat.hpp

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) $(INCLUDE)
	$(CPP) $(CPPFLAGS) $(OBJECT) -o $(EXECUTABLE)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all