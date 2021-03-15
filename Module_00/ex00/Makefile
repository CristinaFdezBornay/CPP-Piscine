# COMPILER AND FLAGS
CC = clang++
CFLAGS = -Wall -Wextra -Werror

# SOURCES
SRCS = megaphone.cpp

# OBJECTS
OBJS = $(SRCS:.cpp=.o)

#  EXECUTABLE
MAIN = megaphone

all:		$(MAIN)

$(MAIN):	$(OBJS)
			$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.cpp.o:		$(CC) $(CFLAGS) -c $< -o $@

clean:		$(RM) *.o *~ $(MAIN)
