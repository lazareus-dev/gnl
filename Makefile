
NAME = GNL

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFT = libft/libft.a

INCLUDES = get_next_line.h

SOURCES = get_next_line.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

libft:
	make -C libft/

$(NAME): libft $(OBJECTS) $(INCLUDES)
	$(CC) $(CFLAGS) main.c $(SOURCES) $(LIBFT) -o $(NAME)

clean:
	@ make clean -C libft/
	@ rm -f $(OBJECTS)

fclean: clean
	@ make fclean -C libft/
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
#.SILENT: $(OBJECTS)
