
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <stdlib.h>

# define BUF_SIZE 32
int get_next_line(const int fd, char **line);

#endif
