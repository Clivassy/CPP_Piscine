##########   BASE   ##########
# File name
NAME = fixed

# Sources
SRCS += main.cpp
SRCS += Fixed.cpp

HEADER += Fixed.hpp

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