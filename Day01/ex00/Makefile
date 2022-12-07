EXECUTABLE = Zombie

CXX	= c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJECT	= $(SOURCE:.c=:.o)

INCLUDE	= Zombie.hpp

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) 
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $(EXECUTABLE)

$(OBJECT): $(SOURCE) $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $(SOURCE) -o $(OBJECT)

clean: rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all

./PHONY: clean fclean all re 