/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:06:04 by manuel            #+#    #+#             */
/*   Updated: 2021/02/06 04:23:32 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init(t_op f[5])
{
	f[0] = add;
	f[1] = subtract;
	f[2] = multiply;
	f[3] = divide;
	f[4] = modulo;
}

t_bool	valid(char *op)
{
	if (ft_find_index(*op, OPERATORS) >= 0 && !*(op + 1))
		return (true);
	return (false);
}

int		main(int argc, char *argv[])
{
	t_op	operation;
	t_op	operations[5];

	init(operations);
	if (argc == 4 && valid(argv[2]))
	{
		if (*argv[2] == '/' && *argv[3] == '0')
			ft_putstr("Stop : division by zero");
		else if (*argv[2] == '%' && *argv[3] == '0')
			ft_putstr("Stop : modulo by zero");
		else
		{
			operation = operations[ft_find_index(*argv[2], OPERATORS)];
			ft_putnbr(operation(ft_atoi(argv[1]), ft_atoi(argv[3])));
		}
		ft_putchar('\n');
	}
	else
		ft_putstr("0\n");
	return (0);
}
