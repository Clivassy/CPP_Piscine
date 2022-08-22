##########   BASE   ##########
# File name
NAME = megaphone

# Sources
SRCS += megaphone.cpp

OBJS = ${SRCS:.c=.o}

# Compilateurs
CC = g++
CFLAGS = -g -Wall -Wextra -Werror

##########   RULES   ##########
all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS}

%.o: %.c $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re