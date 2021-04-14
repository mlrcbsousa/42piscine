/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:17:20 by msousa            #+#    #+#             */
/*   Updated: 2021/01/16 01:58:25 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_helper(int div, int nb)
{
	if (nb < 2 || (nb % div == 0 && nb != div))
		return (0);
	else if (nb == div || nb == 2147483647)
		return (1);
	else
		return (prime_helper(div + 1, nb));
}

int	ft_is_prime(int nb)
{
	return (prime_helper(2, nb));
}
