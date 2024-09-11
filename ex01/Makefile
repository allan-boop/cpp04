SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

NAME =poly

OBJS := $(SRCS:%.cpp=%.o)

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CPPFLAGS) $(OBJS) -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
