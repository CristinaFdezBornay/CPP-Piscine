# COMPILER AND FLAGS
CPP = clang++
CFLAGS = -Wall -Wextra -Werror

# RM
RM = rm -f

# SOURCES
SRCS = main.cpp contact.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

# INCLUDES
INCL = contact.hpp

# EXECUTABLE
NAME = phoneboooooook

# RULES
all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -I $(INCL) -o $(NAME) $(OBJS)
			printf "\033[0;32m[cpp00 -> ex01] Compilation [$@] [OK]\n"

$(OBJS):	$(SRCS) Makefile
			$(CPP) $(CFLAGS) -c $< -o $@
			printf "\033[0;32m[cpp00 -> ex01] Linking [$< -> $@] [OK]\n"

clean:
			$(RM) $(OBJS)
			printf "\033[0;31m[cpp00 -> ex01] Clean  [OK]\n"

fclean:		clean
			$(RM) $(NAME)
			printf "\033[0;31m[cpp00 -> ex01] Fclean [OK]\n"

re:			fclean all

.PHONY:		all clean fclean re
.SILENT: