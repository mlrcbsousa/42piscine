/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:10:43 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 00:37:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
		{
			is_numeric = 0;
			break ;
		}
	}
	return (is_numeric);
}
