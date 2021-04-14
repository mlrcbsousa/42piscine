/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 02:29:24 by msousa            #+#    #+#             */
/*   Updated: 2021/01/12 02:56:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buffer;

	buffer = dest;
	while (*buffer != '\0')
		buffer++;
	while (*src != '\0')
	{
		*buffer = *src;
		buffer++;
		src++;
	}
	*buffer = '\0';
	return (dest);
}
