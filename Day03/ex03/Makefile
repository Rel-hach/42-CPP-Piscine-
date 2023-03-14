CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = ScavTrap.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

INCLUDE = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXECUTABLE = DiamondTrap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@$(RM) $(EXECUTABLE)

re: fclean all