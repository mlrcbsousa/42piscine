/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:33:58 by manuel            #+#    #+#             */
/*   Updated: 2021/02/04 02:17:21 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	dec_to_hex(int nbr)
{
	if (nbr > 15)
		dec_to_hex(nbr / 16);
	ft_putchar(HEX[nbr % 16]);
}

void	put_hex(int digits, int nbr)
{
	while (ft_recursive_power(16, --digits) > nbr && digits > 0)
		ft_putchar('0');
	dec_to_hex(nbr);
}
