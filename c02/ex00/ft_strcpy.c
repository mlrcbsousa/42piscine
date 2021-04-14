/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 20:48:15 by msousa            #+#    #+#             */
/*   Updated: 2021/01/09 21:16:50 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *buffer;

	buffer = dest;
	while (*src != '\0')
	{
		*buffer = *src;
		src++;
		buffer++;
	}
	*buffer = '\0';
	return (dest);
}
