/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:21:12 by msousa            #+#    #+#             */
/*   Updated: 2021/01/15 04:33:59 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	build(int grid[10][10])
{
	int	x;
	int	y;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			grid[x][y] = 0;
			x++;
		}
		y++;
	}
}

void	print(int grid[10][10])
{
	int	x;
	int	y;

	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			printf("%d, ", grid[x][y]);
			x++;
		}
		printf("\n");
		y++;
	}
}

int		find_in_y(int grid[10][10], int x)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (grid[x][i])
		{
			return (i);
			break ;
		}
		i++;
	}
	return (-1);
}

int		possible(int grid[10][10], int x, int y)
{
	int	i;
	int	found;

	i = 0;
	while (i < 10)
	{
		found = find_in_y(grid, i);

		int	ytemp = x - i;
		int xtemp = y - found;
		if (xtemp < 0)
			xtemp = -xtemp;
		if (ytemp < 0)
			ytemp = -ytemp;

		if (y == found || ytemp == xtemp)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int grid[10][10], int x, int *solutions)
{
	int	i;

	if (x < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (possible(grid, x, i))
			{
				grid[x][i] = 1;
				solve(grid, x + 1, solutions);
				grid[x][i] = 0;
			}
			i++;
		}
	}
	else
		(*solutions)++;
		print(grid);
}

int	ft_ten_queens_puzzle(void)
{
	int		grid[10][10];
	int		solutions;

	solutions = 0;
	build(grid);
	solve(grid, 0, &solutions);
	return (solutions);
}

int	main(void)
{
	printf("\n%d\n", ft_ten_queens_puzzle());
	return (0);
}
