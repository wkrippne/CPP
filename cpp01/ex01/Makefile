NAME =		zombie

CXX =		c++
CXXFLAGS =	-std=c++98 -Wall -Wextra -Werror

SRC =		Zombie.cpp zombieHorde.cpp main.cpp
OBJ =		$(subst .cpp,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean $(NAME)