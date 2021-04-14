/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoutinh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:34:49 by dmoutinh          #+#    #+#             */
/*   Updated: 2021/01/10 14:59:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int x, int y, int l[3])
{
	char cha;

	cha = ' ';
	if ((l[0] == 0 && l[1] == 0) || (l[0] == 0 && l[1] == y - 1))
	{
		if ((l[2] < 0 && l[3] < 0) || (l[2] < 0 && l[3] > 0))
			cha = 'C';
		else if ((l[2] > 0 && l[3] > 0) || (l[2] > 0 && l[3] < 0))
			cha = 'A';
	}
	else if ((l[0] == x - 1 && l[1] == 0) || (l[0] == x - 1 && l[1] == y - 1))
	{
		if ((l[2] < 0 && l[3] < 0) || (l[2] < 0 && l[3] > 0))
			cha = 'A';
		else if ((l[2] > 0 && l[3] > 0) || (l[2] > 0 && l[3] < 0))
			cha = 'C';
	}
	else if ((1 <= l[1] <= y - 1 && (l[0] == 0 || l[0] == x - 1)))
		cha = 'B';
	else if (1 <= l[0] < x - 1 && (l[1] == 0 || l[1] == y - 1))
		cha = 'B';
	else
		cha = ' ';
	return (ft_putchar(cha));
}

void	rush(int x, int y)
{
	int a[4];
	int i;
	int j;

	a[2] = x;
	a[3] = y;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			a[0] = i;
			a[1] = j;
			print_char(x, y, a);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
