
NAME = gnl

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFT = libft/libft.a

INCLUDES = get_next_line.h

SOURCES = get_next_line.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C libft
	gcc -c $(SOURCES) -o $(NAME)

clean:
	@ rm -f $(OBJECTS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
#.SILENT: $(OBJECTS)
