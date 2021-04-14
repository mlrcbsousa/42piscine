/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 00:35:16 by manuel            #+#    #+#             */
/*   Updated: 2021/02/03 00:43:28 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return ((long)nb * ft_recursive_power(nb, power - 1));
}
