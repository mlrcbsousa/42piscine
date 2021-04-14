/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 22:15:57 by manuel            #+#    #+#             */
/*   Updated: 2021/02/06 22:36:23 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_tab_length(char **tab)
{
	int	length;

	length = 0;
	while (*tab++)
		length++;
	return (length);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int size;

	size = ft_tab_length(tab);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
