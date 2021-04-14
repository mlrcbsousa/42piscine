/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 05:18:50 by msousa            #+#    #+#             */
/*   Updated: 2021/01/13 03:15:23 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	total_size;

	dest_size = 0;
	while (*dest != '\0')
	{
		dest++;
		dest_size++;
	}
	total_size = dest_size;
	while (*src != '\0')
	{
		if ((int)(size) - (int)(total_size) > 1)
		{
			*dest = *src;
			dest++;
		}
		total_size++;
		src++;
	}
	if (size && size >= dest_size)
		*dest = '\0';
	return (total_size);
}
