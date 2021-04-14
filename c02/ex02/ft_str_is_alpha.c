/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:49:28 by msousa            #+#    #+#             */
/*   Updated: 2021/01/09 23:50:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_letter;

	is_letter = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z')
				|| (*str >= 'A' && *str <= 'Z'))
			str++;
		else
		{
			is_letter = 0;
			break ;
		}
	}
	return (is_letter);
}
