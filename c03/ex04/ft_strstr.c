/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 03:05:33 by msousa            #+#    #+#             */
/*   Updated: 2021/01/13 02:30:47 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_save;
	char	*to_find_save;

	if (*to_find == '\0')
		return (str);
	to_find_save = to_find;
	while (*str != '\0')
	{
		if (*str != *to_find_save)
		{
			str++;
			continue ;
		}
		str_save = str;
		while (1)
		{
			if (*to_find_save == '\0')
				return (str);
			if (*str_save++ != *to_find_save++)
				break ;
		}
		to_find_save = to_find;
		str++;
	}
	return (0);
}
