/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdict.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.42.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/01 09:03:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 09:08:10 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_dict *ft_dict(int key, t_list **dict)
{
	t_dict *f;
	t_list *tmp;

	tmp = *dict;
	while (tmp)
	{
		if (((t_dict *)tmp->content)->key == key)
			return (((t_dict *)tmp->content));
		tmp = tmp->next;
	}
	f = ft_memalloc(sizeof(t_dict));
	f->key = key;
	f->value = ft_memalloc(1);
	if (!(*dict))
		*dict = ft_lstnew(f, sizeof(t_dict));
	else
		ft_lstadd(dict, ft_lstnew(f, sizeof(t_dict)));
	return (f);
}
