# INFO PROYECT
DAY = C++ 01
EX = Ex 02

# COMPILER AND FLAGS
CPP = clang++
CFLAGS = 
# CFLAGS = -Wall -Wextra -Werror

# RM
RM = rm -f

# SOURCES
SRCS = main.cpp Zombie.cpp ZombieEvent.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

# INCLUDES
INCL = Zombie.hpp ZombieEvent.hpp

# EXECUTABLE
NAME = ZzzzzombiieeessssssSS

# RULES
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -I $(INCL) $(OBJS) -o $(NAME)
			printf "\033[0;32m[$(DAY) -> $(EX)] Compilation [ $@ ] [OK]\n"

$(OBJS):	$(SRCS) Makefile
			$(CPP) $(CFLAGS) -c $(SRCS)
			printf "\033[0;32m[$(DAY) -> $(EX)] Linking [ $(OBJS) ] [OK]\n"

clean:
			$(RM) $(OBJS)
			printf "\033[0;31m[$(DAY) -> $(EX)] Clean  [ OK ]\n"

fclean:		clean
			$(RM) $(NAME)
			printf "\033[0;31m[$(DAY) -> $(EX)] Fclean [ OK ]\n"

re:			fclean all

.PHONY:		all clean fclean re
.SILENT: