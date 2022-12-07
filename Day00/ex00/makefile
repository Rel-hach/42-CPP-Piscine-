EXECUTABLE	:= megaphone

CPP		:= c++

CPPFLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= megaphone.cpp

OBJ		:= megaphone.o

all: $(EXECUTABLE)

$(OBJ): $(SRC)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(EXECUTABLE): $(OBJ)
	$(CPP) $(CPPFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(EXECUTABLE)

re	: fclean all