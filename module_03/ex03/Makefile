##########   BASE   ##########
# File name
NAME = DiamondTrap

# Compilateurs
CC = c++ 
CFLAGS = -g -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

# Sources
SRCS += main.cpp
SRCS += ClapTrap.cpp
SRCS += ScavTrap.cpp
SRCS += FragTrap.cpp
SRCS += DiamondTrap.cpp

HEADER += ClapTrap.hpp
HEADER += ScavTrap.hpp
HEADER += FragTrap.hpp
HEADER += DiamondTrap.hpp

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