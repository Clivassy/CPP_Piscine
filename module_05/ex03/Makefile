##########   BASE   ##########
# File name
NAME = Intern

# Sources
SRCS += main.cpp
SRCS += Bureaucrat.cpp
SRCS += Intern.cpp
SRCS += Form.cpp
SRCS += ShrubberyCreationForm.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += PresidentialPardonForm.cpp


HEADER += Bureaucrat.hpp
HEADER += Intern.hpp
HEADER += Form.hpp
HEADER += ShrubberyCreationForm.hpp
HEADER += RobotomyRequestForm.hpp
HEADER += PresidentialPardonForm.hpp

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