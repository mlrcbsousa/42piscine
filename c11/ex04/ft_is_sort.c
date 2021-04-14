/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 00:42:32 by manuel            #+#    #+#             */
/*   Updated: 2021/02/06 00:59:17 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i++ < length - 1)
	{
		if (f(*tab, *(tab + 1)) <= 0)
			count++;
		tab++;
	}
	return (count == length - 1);
}
