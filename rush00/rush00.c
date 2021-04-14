/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoutinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:34:49 by dmoutinh          #+#    #+#             */
/*   Updated: 2021/01/10 17:33:22 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_correct_char(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) ||
			(i == x - 1 && j == y - 1) ||
			(i == x - 1 && j == 0) ||
			(i == 0 && j == y - 1))
		ft_putchar('o');
	else if (0 < i < x && (j == 0 || j == y - 1))
		ft_putchar('-');
	else if ((i == 0 || i == x - 1) && 0 < j < y)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	make_positive(int *x, int *y)
{
	if (*x < 0 && *y < 0)
	{
		*x = -*x;
		*y = -*y;
	}
	else if (*y < 0)
		*y = -*y;
	else if (*x < 0)
		*x = -*x;
}

void	rush(int x, int y)
{
	int i;
	int j;

	make_positive(&x, &y);
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			print_correct_char(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
