/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 02:42:34 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 02:44:19 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchar(char c)
{
	char *str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}