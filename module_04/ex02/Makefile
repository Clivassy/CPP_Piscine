##########   BASE   ##########
# File name
NAME = brain

# Sources
SRCS += main.cpp
SRCS += AAnimal.cpp
SRCS += Cat.cpp
SRCS += Dog.cpp
SRCS += Brain.cpp

HEADER += AAnimal.hpp
HEADER += Cat.hpp
HEADER += Dog.hpp
HEADER += Brain.hpp

OBJS = ${SRCS:.cpp=.o}

# Compilateurs
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########
all: $(NAME)

$(NAME): $(OBJS)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS}

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re