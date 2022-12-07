Name = PhoneBook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Contact.cpp PhoneBook.cpp

SRC_HEADERS = Contact.hpp PhoneBook.hpp

OBJ = $(SRC:.cpp=.o)

all : $(Name)

$(Name) : $(OBJ) $(SRC_HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re : fclean all

.PHONY : all fclean
