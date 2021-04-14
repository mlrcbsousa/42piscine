/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 03:20:25 by manuel            #+#    #+#             */
/*   Updated: 2021/02/04 23:49:47 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(t_app *self)
{
	int		size;
	char	buf[80];

	while ((size = read(STDIN, buf, 80)))
	{
	//	buf[size] = 0;
		if (size == 80)
			hexdump(self, buf);
	}
}
