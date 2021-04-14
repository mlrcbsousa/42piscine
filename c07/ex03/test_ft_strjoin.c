/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:05:31 by msousa            #+#    #+#             */
/*   Updated: 2021/01/19 23:28:28 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("size: %d\n", argc - 2);
		printf("sep: %s\n", argv[1]);
		printf("%s", ft_strjoin(argc - 2, argv + 2, argv[1]));
	}
	printf("\n");
	printf("%s", ft_strjoin(0, argv, argv[0]));
	printf("\n");
	return (0);
}
