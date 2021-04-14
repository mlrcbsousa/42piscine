/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 02:11:10 by msousa            #+#    #+#             */
/*   Updated: 2021/01/14 01:37:43 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (*s1 && *s2 && counter < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
		return (0);
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
