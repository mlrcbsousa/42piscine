/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 19:24:46 by msousa            #+#    #+#             */
/*   Updated: 2021/01/17 19:26:36 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_grid[6][6];

int		correct_r(int blocks[6], int n)
{
	int counter;
	int views;
	int tallest;
	int	solution;

	views = 1;
	solution = blocks[5];
	tallest = n;
	counter = 2;
	while (counter < 5)
	{
		if (blocks[5 - counter] > tallest)
		{
			views++;
			tallest = blocks[5 - counter];
		}
		counter++;
	}
	return (views == solution);
}

int		correct_l(int blocks[6], int n)
{
	int counter;
	int views;
	int tallest;
	int	solution;

	views = 1;
	solution = blocks[0];
	tallest = blocks[1];
	counter = 2;
	while (counter < 4)
	{
		if (blocks[counter] > tallest)
		{
			views++;
			tallest = blocks[counter];
		}
		counter++;
	}
	if (n > tallest)
		views++;
	return (views == solution);
}

int		possible(int x, int y, int n)
{
	int	i;
	int	j;
	int blocks[6];

	i = 1;
	while (i < 5)
	{
		if (g_grid[y][i] == n || g_grid[i][x] == n
				|| ((!correct_l(g_grid[i], n) || !correct_r(g_grid[i], n))
					&& y == i && x == 4))
			return (0);
		if (y == 4 && x == i)
		{
			j = 0;
			while (j < 6)
			{
				blocks[j] = g_grid[j][i];
				j++;
			}
			if (!correct_l(blocks, n) || !correct_r(blocks, n))
				return (0);
		}
		i++;
	}
	return (1);
}
