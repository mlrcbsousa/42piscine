/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:08:18 by msousa            #+#    #+#             */
/*   Updated: 2021/01/17 19:15:14 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_grid[6][6];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		valid(char *input)
{
	int counter;

	counter = 1;
	while (*input)
	{
		if ((counter % 2 == 0 && *input != ' ')
				|| (counter % 2 == 1 && *input < '1' && *input > '4')
				|| counter > 31)
			return (0);
		input++;
		counter++;
	}
	return (1);
}

void	build(char *input)
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if ((y == 0 || y == 5) && (x > 0 && x < 5))
				g_grid[y][x] = *(input + (y * 8 / 5) + (x - 1) * 2) - '0';
			else if ((y > 0 && y < 5) && (x == 0 || x == 5))
				g_grid[y][x] = *(input + 16 + (x * 8 / 5) + (y - 1) * 2) - '0';
			else
				g_grid[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	print(void)
{
	int	x;
	int	y;

	y = 1;
	while (y < 5)
	{
		x = 1;
		while (x < 5)
		{
			ft_putchar(g_grid[y][x] + '0');
			if (x != 4)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
