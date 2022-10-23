##########   BASE   ##########
# File name
NAME = sed

# Sources
SRCS += main.cpp
SRCS += sed.cpp

HEADER += sed.hpp

OBJS = ${SRCS:.c=.o}

# Compilateurs
CC = g++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########
all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS}

%.o: %.c $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re