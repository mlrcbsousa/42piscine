/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 02:52:07 by msousa            #+#    #+#             */
/*   Updated: 2021/01/12 03:05:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*buffer;
	unsigned int	counter;

	buffer = dest;
	while (*buffer != '\0')
		buffer++;
	counter = 0;
	while (*src != '\0' && counter < nb)
	{
		*buffer++ = *src++;
		counter++;
	}
	*buffer = '\0';
	return (dest);
}
