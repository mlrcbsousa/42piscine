/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:13:00 by msousa            #+#    #+#             */
/*   Updated: 2021/01/16 22:03:20 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_helper(int div, int nb)
{
//	if ((div > nb / div) && div != 3)
//		return (0);
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	printf("\n");
	return (0);
}
