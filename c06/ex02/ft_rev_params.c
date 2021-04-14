/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 05:05:02 by msousa            #+#    #+#             */
/*   Updated: 2021/01/15 05:06:22 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	while (argc > 1)
	{
		while (*argv[argc - 1])
			write(1, argv[argc - 1]++, 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
