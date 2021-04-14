/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 04:06:57 by msousa            #+#    #+#             */
/*   Updated: 2021/01/21 01:31:11 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char *argv[])
{
	char **strs;

	if (argc == 3)
	{
		printf("str: %s\n", argv[2]);
		printf("sep: %s\n", argv[1]);

		strs = ft_split(argv[2], argv[1]); 
		while (*strs)
			printf("%s\n", *strs++);
	}
	printf("\n");
	return (0);
}
