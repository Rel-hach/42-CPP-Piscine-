EXECUTABLE = fixed

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = Fixed.cpp main.cpp

OBJECT = $(SOURCE:.cpp=.o)

INCLUDE = Fixed.hpp 

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) $(INCLUDE)
	$(CPP) $(CPPFLAGS) $(OBJECT) -o $(EXECUTABLE)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all

./PHONY: clean fclean all re