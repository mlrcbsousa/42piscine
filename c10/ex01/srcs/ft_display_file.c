/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 22:56:38 by manuel            #+#    #+#             */
/*   Updated: 2021/01/30 01:42:14 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	put_errno(t_app *self, char *filepath)
{
	if (!errno)
		return ;
	ft_puterr(basename(self->name));
	ft_puterr(": ");
	ft_puterr(filepath);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
	if (!self->error)
		self->error = true;
}

void	ft_display_file(t_app *self, char *filepath)
{
	int		size;
	int		fd;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(filepath, O_RDONLY)) == -1)
	{
		put_errno(self, filepath);
		return ;
	}
	while ((size = read(fd, buf, BUF_SIZE)))
	{
		if (size == -1)
		{
			put_errno(self, filepath);
			break ;
		}
		buf[size] = 0;
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		put_errno(self, filepath);
}
