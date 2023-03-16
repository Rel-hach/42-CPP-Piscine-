CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = Bureaucrat.cpp main.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXECUTABLE = Bureaucrat

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES) Bureaucrat.hpp
	$(CXX) $(OBJ_FILES) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@$(RM) $(EXECUTABLE)

re: fclean all