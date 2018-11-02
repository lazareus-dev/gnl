/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.42.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 09:03:26 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 10:23:51 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	static t_list *multi_fd;
	t_dict *f;
	char buf[BUFF_SIZE + 1];
	int ret;
	char *to_clean;

	ret = 1;
	f = ft_dict(fd, &multi_fd);
	while (!(ft_isincharset('\n', f->value)) && ret > 0)
	{
		to_clean = f->value;
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		f->value = ft_strjoin(f->value, buf);
		ft_strdel(&to_clean);
	}
	if (ret > 0)
	{
		to_clean = f->value;
		printf("%p\n", to_clean);
		ft_strcpy(*line, ft_strsep(&f->value, "\n"));
		f->value = ft_strdup(f->value);
		ft_strdel(&to_clean);
	}
	//if (*line == NULL || ret => 0)
	//	clean dictionnaire to FD with del delone and lstrelink
	return (((ret != 0) ? ret / ft_abs(ret) : ret));
}
