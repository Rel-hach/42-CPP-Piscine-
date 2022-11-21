EXECUTABLE	:= megaphone

CC		:= c++

FLAGS	:= -Wall -Werror -Wextra -std=c++98

SRC		:= megaphone.cpp

OBJ		:= megaphone.o

all: $(EXECUTABLE)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $< -o $@

$(EXECUTABLE): $(OBJ)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(EXECUTABLE)

re	: fclean all