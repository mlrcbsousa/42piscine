/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 03:00:05 by msousa            #+#    #+#             */
/*   Updated: 2021/01/09 03:30:24 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_string(char *string, int n, int combination)
{
	int index;

	index = n - 1;
	while (index >= 0)
	{
		string[index] = (combination % 10) + '0';
		combination /= 10;
		index--;
	}
}

void	print_if_should(int combination, int n, int max, int counter)
{
	char	string[n];
	int		print;
	int		print_i;

	int_to_string(&string[0], n, combination);
	print_i = 0;
	print = 0;
	while (print_i < n - 1)
	{
		if (string[print_i] < string[print_i + 1])
		{
			print++;
		}
		print_i++;
	}
	if (counter == max)
	{
		write(1, &string[0], n);
	}
	else if (print == n - 1)
	{
		write(1, &string[0], n);
		write(1, ", ", 2);
	}
}

int		max_number(int n)
{
	int		max_n;
	int		max_i;
	int		max_d;
	int		max;

	max_n = n - 1;
	max_i = 0;
	max = 0;
	while (max_i < n)
	{
		max_d = 9 - max_n;
		max = 10 * max + (9 - max_n);
		max_i++;
		max_n--;
	}
	return (max);
}

void	ft_print_combn(int n)
{
	int		counter;
	int		combination;
	int		max;

	max = max_number(n);
	counter = 0;
	while (counter <= max)
	{
		combination = counter;
		print_if_should(combination, n, max, counter);
		counter++;
	}
}
