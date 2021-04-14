/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:17:25 by msousa            #+#    #+#             */
/*   Updated: 2021/01/10 20:51:42 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*buffer;
	char	previous;

	buffer = str;
	previous = ' ';
	while (*buffer != '\0')
	{
		if (*buffer >= 'a' && *buffer <= 'z'
				&& (previous == ' ' ||
					previous == '+' ||
					previous == '-'))
			*buffer -= 32;
		else if (*buffer >= 'A' && *buffer <= 'Z')
			*buffer += 32;
		previous = *buffer++;
	}
	return (str);
}
