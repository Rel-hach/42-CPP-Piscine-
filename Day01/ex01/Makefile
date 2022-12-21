Name = Horde

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

SRC_HEADERS = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ) $(SRC_HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : all fclean re clean
