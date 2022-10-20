##########   BASE   ##########
# File name
NAME = megaphone

# Sources
SRCS += megaphone.cpp

OBJS = ${SRCS:.c=.o}

# Compilateurs
CC = g++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########
all: $(NAME)

$(NAME): $(OBJS)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS}

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re