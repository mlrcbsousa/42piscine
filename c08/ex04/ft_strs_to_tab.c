/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 01:56:00 by msousa            #+#    #+#             */
/*   Updated: 2021/01/19 17:37:42 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	char	*buffer;

	buffer = (char*)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (!buffer)
		return (0);
	dest = buffer;
	while (*src)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	t_stock_str *buffer;
	int			index;

	stock = (t_stock_str*)malloc(sizeof(*stock) * (ac + 1));
	if (!stock)
		return (NULL);
	buffer = stock;
	index = 0;
	while (index < ac)
	{
		buffer->size = ft_strlen(*av);
		buffer->str = *av;
		buffer->copy = ft_strdup(*av);
		av++;
		buffer++;
		index++;
	}
	buffer->str = 0;
	return (stock);
}
