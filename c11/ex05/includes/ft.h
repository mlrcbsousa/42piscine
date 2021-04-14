/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 22:37:45 by manuel            #+#    #+#             */
/*   Updated: 2021/02/06 04:25:58 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include "ft_boolean.h"

# define OPERATORS "+-*/%"

typedef	int	(*t_op)(int, int);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_find_index(char c, char *str);
void	ft_putnbr(int nbr);

int		add(int a, int b);
int		subtract(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);

#endif
