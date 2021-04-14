/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 04:58:22 by msousa            #+#    #+#             */
/*   Updated: 2021/01/15 05:03:11 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		while (*argv[index])
			write(1, argv[index]++, 1);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
