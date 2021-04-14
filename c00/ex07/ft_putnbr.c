/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 02:29:24 by msousa            #+#    #+#             */
/*   Updated: 2021/01/09 02:55:29 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sanitize_and_print(int negative, char string[10])
{
	int	print_n;

	print_n = 0;
	while (print_n < 9)
	{
		if (string[print_n] == '0')
			print_n++;
		else
			break ;
	}
	if (negative)
		write(1, "-", 1);
	write(1, &string[print_n], 10 - print_n);
}

void	ft_putnbr(int nbr)
{
	int		negative;
	char	string[10];
	int		index;

	negative = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		negative = 1;
	}
	index = 9;
	while (index >= 0)
	{
		string[index] = (nbr % 10) + '0';
		nbr /= 10;
		index--;
	}
	sanitize_and_print(negative, string);
}
