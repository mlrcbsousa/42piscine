/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_printables.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:29:10 by manuel            #+#    #+#             */
/*   Updated: 2021/02/04 02:18:45 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

void	put_printables(char *str)
{
	int	i;

	i = 0;
	while (i < 16 && *str)
	{
		if (is_printable(*str))
			ft_putchar(*str);
		else
			ft_putchar('.');
		str++;
		i++;
	}
}
