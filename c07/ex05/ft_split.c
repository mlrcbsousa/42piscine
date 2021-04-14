/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 05:10:31 by msousa            #+#    #+#             */
/*   Updated: 2021/01/19 07:53:21 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strpdup(char *src, char *end)
{
	char	*dest;
	char	*buffer;
	int		length;

	buffer = src;
	length = 0;
	while (buffer++ < end)
		length++;
	dest = (char*)malloc(sizeof(*src) * (length + 1));
	if (!dest)
		return (0);
	buffer = dest;
	while (src < end)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

void	duplicate(char **strs, char *str, char *charset, int charset_l)
{
	char	*buffer;
	char	*dup;

	buffer = str;
	while ((buffer = ft_strstr(buffer, charset)))
	{
		dup = ft_strpdup(str, buffer);
		if (dup)
			*strs++ = dup;
		buffer += charset_l;
		str = buffer;
	}
	*strs = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*buffer;
	int		splits;
	int		charset_l;

	charset_l = ft_strlen(charset);
	buffer = str;
	splits = 0;
	while ((buffer = ft_strstr(buffer, charset)))
	{
		buffer += charset_l;
		splits++;
	}
	strs = (char**)malloc((2 + splits) * sizeof(*strs));
	if (!strs)
		return (0);
	duplicate(strs, str, charset, charset_l);
	return (strs);
}
