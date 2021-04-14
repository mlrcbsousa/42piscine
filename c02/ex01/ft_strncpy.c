/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:19:55 by msousa            #+#    #+#             */
/*   Updated: 2021/01/09 23:07:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*buffer;
	unsigned int	start;

	start = 0;
	buffer = dest;
	while (start < n)
	{
		if (*src == '\0')
			*buffer = '\0';
		else
		{
			*buffer = *src;
			src++;
		}
		buffer++;
		start++;
	}
	return (dest);
}
