/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:39:01 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 00:43:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
		{
			is_lowercase = 0;
			break ;
		}
	}
	return (is_lowercase);
}
