/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 02:57:46 by msousa            #+#    #+#             */
/*   Updated: 2021/01/16 03:36:17 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*buffer;

	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(min) * (max - min));
	buffer = range;
	while (min < max)
		*buffer++ = min++;
	return (range);
}
