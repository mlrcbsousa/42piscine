/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 04:43:51 by msousa            #+#    #+#             */
/*   Updated: 2021/01/15 04:56:56 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	argc = 1;
	while (*argv[0])
		write(1, (argv[0])++, 1);
	write(1, "\n", 1);
	return (0);
}
