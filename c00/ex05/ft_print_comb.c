/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:53:52 by msousa            #+#    #+#             */
/*   Updated: 2021/01/07 21:45:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_if_should(char combination[3])
{
	if (combination[0] == '7' &&
		combination[1] == '8' &&
		combination[2] == '9')
	{
		write(1, &combination[0], 3);
	}
	else if (combination[0] < combination[1] < combination[2] &&
				combination[0] != combination[1] != combination[2])
	{
		write(1, &combination[0], 3);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	combination[3];

	combination[0] = '0';
	while (combination[0] <= '7')
	{
		combination[1] = combination[0] + 1;
		while (combination[1] <= '8')
		{
			combination[2] = combination[1] + 1;
			while (combination[2] <= '9')
			{
				print_if_should(combination);
				++combination[2];
			}
			++combination[1];
		}
		++combination[0];
	}
}
