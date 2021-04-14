/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:53:08 by msousa            #+#    #+#             */
/*   Updated: 2021/01/13 05:09:30 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		sign;
	int		number;

	sign = 1;
	number = 0;
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				number = 10 * number + *str - '0';
				str++;
			}
			break ;
		}
		str++;
	}
	return (sign * number);
}
