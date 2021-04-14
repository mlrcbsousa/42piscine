/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:37:45 by manuel            #+#    #+#             */
/*   Updated: 2021/02/04 23:37:31 by manuel           ###   ########.fr       */
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

# define HEX "0123456789abcdef"

struct	s_app
{
	char	*name;
	char	**paths;
	int		count;
	int		count_d;
	t_bool	cflag;
	t_bool	nofile;
	t_bool	error;
	void	(*body)(char *, int);
	void	(*fill)(char *, int);
};

typedef struct s_app	t_app;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *err);
void	ft_display_file(t_app *self, char *filepath);
void	ft_stdin(t_app *self);
long	ft_recursive_power(int nb, int power);

t_bool	is_c_flag(char *flag);
void	hexdump(t_app *self, char *buf);
void	put_printables(char *str);
void	put_hex(int digits, int nbr);

void	body_(char *buf, int counter);
void	body_c(char *buf, int counter);
void	fill_(char *buf, int counter);
void	fill_c(char *buf, int counter);

#endif
