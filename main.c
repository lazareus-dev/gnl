#include "get_next_line.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int fd;
	char *line;

	if (argc == 1)
	{

		return (0);
	}
	fd = open(argv[0], O_RDONLY);
	while ((i = get_next_line(fd, &line)))
		printf("%s\n", line);
	return (i);
}
