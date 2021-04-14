/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 01:20:35 by msousa            #+#    #+#             */
/*   Updated: 2021/01/19 17:27:07 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sanitized_base(char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' '
				|| (*base >= 9 && *base <= 13))
			return (0);
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
				return (0);
		}
		n++;
		base++;
	}
	return (n);
}

int	find_index(char c, char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (c == *str)
			return (index);
		str++;
		index++;
	}
	return (-1);
}

int	has_char(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		number;
	int		n;

	n = sanitized_base(base);
	if (n < 2)
		return (0);
	sign = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (has_char(*str, base))
		{
			while (has_char(*str, base))
			{
				number = n * number + find_index(*str, base);
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * number);
}
