
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <stdlib.h>
# include "libft/libft.h"
#include <stdio.h> //to remove

# define BUFF_SIZE 100
int get_next_line(const int fd, char **line);

#endif
