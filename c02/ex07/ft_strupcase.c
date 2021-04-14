/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:12:17 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 19:12:51 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if (*buffer >= 'a' && *buffer <= 'z')
			*buffer -= 32;
		buffer++;
	}
	return (str);
}
