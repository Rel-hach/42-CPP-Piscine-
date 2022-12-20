EXECUTABLE = Harl

CPP	= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = Harl.cpp main.cpp

OBJECT = $(SOURCE:.cpp=.o)

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT) Harl.hpp
	$(CPP) $(CPPFLAGS) $(OBJECT) -o $(EXECUTABLE)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(EXECUTABLE)

re: fclean all

./PHONY: clean fclean all re 