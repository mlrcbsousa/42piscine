/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 23:34:54 by msousa            #+#    #+#             */
/*   Updated: 2021/01/07 21:46:48 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_formatted(char string[4])
{
	write(1, &string[0], 2);
	write(1, " ", 1);
	write(1, &string[2], 2);
}

void	print_if_should(char string[4])
{
	int pair_1;
	int pair_2;

	pair_1 = (string[0] - '0') * 10 + (string[1] - '0');
	pair_2 = (string[2] - '0') * 10 + (string[3] - '0');
	if (pair_1 == 98 && pair_2 == 99)
	{
		print_formatted(string);
	}
	else if (pair_1 < pair_2)
	{
		print_formatted(string);
		write(1, ", ", 2);
	}
	return ;
}

void	ft_print_comb2(void)
{
	int		counter;
	char	string[4];
	int		index;
	int		combination;

	counter = 0;
	while (counter <= 9899)
	{
		index = 3;
		combination = counter;
		while (index >= 0)
		{
			string[index] = (combination % 10) + '0';
			combination /= 10;
			index--;
		}
		print_if_should(string);
		counter++;
	}
}
