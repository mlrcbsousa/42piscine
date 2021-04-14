/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoutinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 10:51:28 by dmoutinh          #+#    #+#             */
/*   Updated: 2021/01/10 16:48:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_correct_char(int x, int y, int argv[3])
{
	int i;
	int j;

	i = argv[1];
	j = argv[2];
	if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
	{
		if (argv[0])
			ft_putchar('A');
		else
			ft_putchar('C');
	}
	else if ((j == y - 1 && i == 0) || (i == x - 1 && j == y - 1))
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

void	rush(int x, int y)
{
	int argv[3];

	argv[0] = 1;
	if (y < 0)
	{
		y = -y;
		argv[0] = 0;
	}
	if (x < 0)
		x = -x;
	argv[2] = 0;
	while (argv[2] < y)
	{
		argv[1] = 0;
		while (argv[1] < x)
		{
			print_correct_char(x, y, argv);
			argv[1]++;
		}
		ft_putchar('\n');
		argv[2]++;
	}
}
