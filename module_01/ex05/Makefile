##########   BASE   ##########
# File name
NAME = harl

# Sources
SRCS += main.cpp
SRCS += Harl.cpp

HEADER += Harl.hpp

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