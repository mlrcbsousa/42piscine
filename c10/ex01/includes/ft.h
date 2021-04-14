/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:37:45 by manuel            #+#    #+#             */
/*   Updated: 2021/01/29 03:48:49 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include "ft_boolean.h"

/*
** 2^14 + 2^13 + 2^12
*/
# define BUF_SIZE 28672

# define STDIN 0
# define STDOUT 1
# define STDERR 2

struct	s_app
{
	char	*name;
	t_bool	error;
};

typedef struct s_app	t_app;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *err);
void	ft_display_file(t_app *self, char *filepath);
void	ft_stdin(void);

#endif
