# INFO PROYECT
DAY = C++ 01
EX = Ex 06

# COMPILER AND FLAGS
CPP = clang++
CFLAGS = -Wall -Wextra -Werror

# RM
RM = rm -f

# SOURCES
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

# INCLUDES
INCL = Weapon.hpp HumanA.hpp HumanB.hpp 

# EXECUTABLE
NAME = HhumansS_with_WwweapponnsssSS

# RULES
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)
			printf "\033[0;32m[ $(DAY) -> $(EX) ] Linking [ $(NAME) ] [ OK ]\n"

$(OBJS):	$(SRCS) Makefile
			$(CPP) $(CFLAGS) -c $(SRCS)
			printf "\033[0;32m[ $(DAY) -> $(EX) ] Compilation [ $(SRCS) -> $(OBJS) ] [ OK ]\n"

clean:
			$(RM) $(OBJS)
			printf "\033[0;31m[ $(DAY) -> $(EX) ] Clean  [ OK ]\n"

fclean:		clean
			$(RM) $(NAME)
			printf "\033[0;31m[ $(DAY) -> $(EX) ] Fclean [ OK ]\n"

re:			fclean all

.PHONY:		all clean fclean re
.SILENT: