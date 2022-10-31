##########   BASE   ##########
# File name
NAME = zombieHorde

# Sources
SRCS += main.cpp
SRCS += Zombie.cpp
SRCS += zombieHorde.cpp

HEADER = Zombie.hpp
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