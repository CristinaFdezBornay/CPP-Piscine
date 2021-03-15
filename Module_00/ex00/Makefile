# COMPILER AND FLAGS
CPP = clang++
CFLAGS = -Wall -Wextra -Werror

# RM
RM = rm -f

# SOURCES
SRCS = megaphone.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

#  EXECUTABLE
NAME = megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS)

.cpp.o:		$(CPP) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re