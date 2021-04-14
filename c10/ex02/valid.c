/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 23:44:18 by manuel            #+#    #+#             */
/*   Updated: 2021/01/29 23:47:05 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

t_bool	valid(char *nbytes)
{
	while (*nbytes)
	{
		if (!is_digit(*nbytes++))
			return (false);
	}
	return (true);
}

void	invalid_bytes(t_app *self, char *nbytes)
{
	ft_puterr(basename(self->name));
	ft_puterr(": invalid number of bytes: \'");
	ft_puterr(nbytes);
	ft_puterr("\'\n");
	self->error = true;
}
