/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:16:02 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 19:16:39 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *buffer;

	buffer = str;
	while (*buffer != '\0')
	{
		if (*buffer >= 'A' && *buffer <= 'Z')
			*buffer += 32;
		buffer++;
	}
	return (str);
}
