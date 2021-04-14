/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:23:11 by msousa            #+#    #+#             */
/*   Updated: 2021/01/11 02:08:14 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ascii_dec_to_hex(int dec, char *hex)
{
	int		modulo;
	int		digit;
	char	letter;

	letter = 'a';
	digit = 10;
	modulo = dec % 16;
	*hex = (dec / 16) + '0';
	hex++;
	if (modulo > 9)
	{
		while (digit < 16)
		{
			if (modulo == digit)
			{
				*hex = letter;
				break ;
			}
			digit++;
			letter++;
		}
	}
	else
		*hex = modulo + '0';
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			ascii_dec_to_hex((int)(*str), &hex[0]);
			write(1, "\\", 1);
			write(1, &hex[0], 2);
		}
		str++;
	}
}
