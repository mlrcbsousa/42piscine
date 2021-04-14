/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:06:56 by msousa            #+#    #+#             */
/*   Updated: 2021/01/16 03:02:43 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_length(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*buffer;

	buffer = (char*)malloc(sizeof(*src) * str_length(src) + 1);
	if (!buffer)
		return (0);
	dest = buffer;
	while (*src)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}
