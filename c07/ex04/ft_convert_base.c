/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 00:58:45 by msousa            #+#    #+#             */
/*   Updated: 2021/01/18 05:08:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		sanitized_base(char *base);

int		dec_to_base_len(int nbr, int n, int length)
{
	if (nbr > n - 1)
		return (dec_to_base_len(nbr / n, n, length + 1));
	else
		return (length);
}

void	dec_to_base(char *nbr, char *base, int n, int dec)
{
	if (dec > n - 1)
		dec_to_base(nbr - 1, base, n, dec / n);
	*nbr = base[dec % n];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal;
	char	*result;
	int		base_to_n;
	int		sign;
	int		size;

	base_to_n = sanitized_base(base_to);
	if (sanitized_base(base_from) < 2 || base_to_n < 2)
		return (NULL);
	sign = 0;
	decimal = ft_atoi_base(nbr, base_from);
	if (decimal < 0)
	{
		sign = 1;
		decimal = -decimal;
	}
	size = sizeof(*result) * (dec_to_base_len(decimal, base_to_n, 1) + sign);
	result = (char*)malloc(size);
	if (sign)
	{
		*result = '-';
		result++;
	}
	dec_to_base(result + size - 1 - sign, base_to, base_to_n, decimal);
	return (result - sign);
}
