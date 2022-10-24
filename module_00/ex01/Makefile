##########   BASE   ##########
# File name
NAME = phonebook

# Sources
SRCS += phonebook.cpp
HEADER = phonebook.hpp

OBJS = ${SRCS:.cpp=.o}

# Compilateurs
CC = clang++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

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