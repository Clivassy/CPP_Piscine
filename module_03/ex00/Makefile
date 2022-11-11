##########   BASE   ##########
# File name
NAME = claptrap

# Compilateurs
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

# Sources
SRCS += main.cpp
SRCS += ClapTrap.cpp

HEADER += ClapTrap.hpp

OBJS = ${SRCS:.cpp=.o}



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