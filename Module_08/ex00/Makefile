# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 11:29:35 by crfernan          #+#    #+#              #
#    Updated: 2021/10/29 11:30:09 by crfernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# INFO PROYECT
DAY = C++ 08
EX = Ex 00

# COMPILER AND FLAGS
CPP = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# RM
RM = rm -f

# SOURCES
SRCS = main.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

# INCLUDES
INCL = EasyFind.hpp

# EXECUTABLE
NAME = EasyFind

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