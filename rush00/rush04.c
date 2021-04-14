/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoutinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:34:49 by dmoutinh          #+#    #+#             */
/*   Updated: 2021/01/10 18:26:44 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_correct_char(int x, int y, int argv[3])
{
	int i;
	int j;

	i = argv[1];
	j = argv[2];
	if ((i == 0 && j == 0) || (i == x - 1 && i != 0 && j == y - 1 && j != 0))
	{
		if (argv[0])
			ft_putchar('A');
		else
			ft_putchar('C');
	}
	else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
	{
		if (argv[0])
			ft_putchar('C');
		else
			ft_putchar('A');
	}
	else if ((0 < i < x && (j == 0 || j == y - 1)) ||
			((i == 0 || i == x - 1) && 0 < j < y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	decide_version(int *x, int *y, int *positive)
{
	if (*x < 0 && *y < 0)
	{
		*x = -*x;
		*y = -*y;
	}
	else if (*y < 0)
	{
		*y = -*y;
		*positive = 0;
	}
	else if (*x < 0)
	{
		*x = -*x;
		*positive = 0;
	}
}

void	rush(int x, int y)
{
	int	argv[3];
	int	i;
	int	j;

	argv[0] = 1;
	decide_version(&x, &y, &argv[0]);
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			argv[1] = i;
			argv[2] = j;
			print_correct_char(x, y, argv);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
