/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:06:04 by manuel            #+#    #+#             */
/*   Updated: 2021/01/30 02:28:01 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_foreach(t_app *self)
{
	while (*(self->paths))
	{
		ft_display_file(self, *(self->paths));
		self->paths++;
	}
}

void	tail(t_app *self, char *buf)
{
	while (*buf++)
		;
	if (!self->single)
	{
		ft_putstr("==> ");
		ft_putstr(*(self->paths));
		ft_putstr(" <==\n");
	}
	ft_putstr(buf - self->nbytes - 1);
	if (*(self->paths + 1))
		ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	t_app	self;

	if (argc == 1)
	{
		ft_stdin();
		return (0);
	}
	self = (t_app) { .name = *argv++, .error = false, .single = false };
	if (!valid(*(++argv)))
		invalid_bytes(&self, *argv);
	else if (argc == 3)
		ft_stdin();
	else
	{
		self.nbytes = ft_atoi(*argv++);
		if (argc == 4)
			self.single = true;
		self.paths = argv;
		ft_foreach(&self);
	}
	return (self.error);
}
