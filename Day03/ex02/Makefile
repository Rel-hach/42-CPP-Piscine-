CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = ScavTrap.cpp ClapTrap.cpp FragTrap.cpp main.cpp

INCLUDE = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXECUTABLE = FragTrap

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