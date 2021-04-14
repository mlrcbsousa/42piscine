/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 18:58:35 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 19:00:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
		{
			is_printable = 0;
			break ;
		}
	}
	return (is_printable);
}
