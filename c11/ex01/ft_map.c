/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 01:25:37 by manuel            #+#    #+#             */
/*   Updated: 2021/02/05 23:30:15 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int i;

	res = (int*)malloc(sizeof(*tab) * length);
	i = 0;
	while (i++ < length)
		*res++ = f(*tab++);
	return (res - length);
}
