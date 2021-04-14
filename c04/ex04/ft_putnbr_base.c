/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:41:35 by msousa            #+#    #+#             */
/*   Updated: 2021/01/13 16:38:48 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	dec_to_base(int nbr, char *base, int n)
{
	if (nbr > n - 1)
		dec_to_base(nbr / n, base, n);
	put_char(base[nbr % n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base != '\0' && *base != '+' && *base != '-')
	{
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
				return ;
		}
		n++;
		base++;
	}
	if (n > 1 && *base != '+' && *base != '-')
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			put_char('-');
		}
		dec_to_base(nbr, base - n, n);
	}
}
