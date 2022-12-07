NAME = Brian

CPP	= c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

OBJ = main.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CPP) $(CPPFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJ)
	@echo "Object file has been deleted"
fclean: clean
	@rm -f $(NAME)
	@echo "Executable has been deleted"

re: fclean all

./PHONY: clean fclean all re