##########   BASE   ##########
# File name
NAME = animal

# Sources
SRCS += main.cpp
SRCS += Animal.cpp
SRCS += Cat.cpp
SRCS += WrongCat.cpp
SRCS += WrongAnimal.cpp
SRCS += Dog.cpp

HEADER += Animal.hpp
HEADER += WrongAnimal.hpp
HEADER += WrongCat.hpp
HEADER += Cat.hpp
HEADER += Dog.hpp

OBJS = ${SRCS:.cpp=.o}

# Compilateurs
CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########
all: $(NAME)

$(NAME): $(OBJS)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS}

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re