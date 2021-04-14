/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strs_to_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 03:46:19 by msousa            #+#    #+#             */
/*   Updated: 2021/01/19 03:46:55 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
	
int	main(int argc, char *argv[])
{
	t_stock_str	*stock;
	
	if (argc > 1)
	{
		stock = ft_strs_to_tab(argc - 1, ++argv);
		while (stock->str)
		{
			printf("str: %s\n", stock->str);
			printf("copy: %s\n", stock->copy);
			printf("size: %d\n", stock->size);
			stock++;
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}
