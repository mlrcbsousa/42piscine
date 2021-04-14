/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 05:15:37 by msousa            #+#    #+#             */
/*   Updated: 2021/01/15 05:37:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		a;
	int		b;
	char	*temp;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (ft_strcmp(tab[a], tab[b]) > 0)
			{
				temp = tab[b];
				tab[b] = tab[a];
				tab[a] = temp;
			}
			b++;
		}
		a++;
	}
}

int		main(int argc, char *argv[])
{
	int	index;

	if (argc > 2)
		ft_sort_str_tab(argv + 1, argc - 1);
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
