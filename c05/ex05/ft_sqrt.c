/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:44:56 by msousa            #+#    #+#             */
/*   Updated: 2021/01/16 01:40:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	sqrt = 1;
	while (sqrt < nb / sqrt)
		sqrt++;
	if (sqrt == nb / sqrt && nb % sqrt == 0)
		return (sqrt);
	else
		return (0);
}
