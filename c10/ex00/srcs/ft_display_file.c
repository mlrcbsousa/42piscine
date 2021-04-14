/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 22:56:38 by manuel            #+#    #+#             */
/*   Updated: 2021/01/29 03:41:23 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_file(char *filepath)
{
	int		size;
	int		fd;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(filepath, O_RDONLY)) == -1)
		ft_putstr("Cannot read file.\n");
	else
	{
		while ((size = read(fd, buf, BUF_SIZE)))
		{
			buf[size] = 0;
			ft_putstr(buf);
		}
	}
	close(fd);
}
