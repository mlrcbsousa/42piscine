/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:45:13 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 00:47:00 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
		{
			is_uppercase = 0;
			break ;
		}
	}
	return (is_uppercase);
}
