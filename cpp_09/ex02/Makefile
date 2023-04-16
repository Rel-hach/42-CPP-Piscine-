CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = PmergeMe.cpp main.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXECUTABLE = PmergeMe

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