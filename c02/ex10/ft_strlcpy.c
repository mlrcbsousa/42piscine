/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:53:05 by msousa            #+#    #+#             */
/*   Updated: 2021/01/11 00:20:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			fill_remainder(unsigned int size,
								unsigned int length,
								char *dest)
{
	while (size > length)
	{
		*dest = '\0';
		dest++;
		size--;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = 0;
	if (size > 0)
	{
		while (*src != '\0')
		{
			if (length == size)
				break ;
			*dest = *src;
			src++;
			dest++;
			length++;
		}
	}
	*dest = '\0';
	fill_remainder(size, length, dest);
	while (*src != '\0')
	{
		length++;
		src++;
	}
	return (length);
}
