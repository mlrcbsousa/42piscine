/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:26:46 by manuel            #+#    #+#             */
/*   Updated: 2021/02/11 01:19:30 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin)
{
	int	size;

	size = 0;
	while (begin)
	{
		size++;
		begin = begin->next;
	}
	return (size);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i++ < nbr)
	{
		if (!begin_list)
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_swap(t_list *previous, t_list *current, t_list *next)
{
	t_list	*temp;

	temp = next->next;
	if (previous)
		previous->next = next;
	current->next = temp;
	next->next = current;
}

void	compare(t_list **begin_list, t_list **previous, int j, int (*cmp)())
{
	t_list	*current;
	t_list	*next;

	current = ft_list_at(*begin_list, j);
	next = ft_list_at(*begin_list, j + 1);
	if (cmp(current->data, next->data) >= 0)
	{
		if (!*previous)
			*begin_list = next;
		ft_list_swap(*previous, current, next);
		*previous = next;
	}
	else
		*previous = current;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		j;
	int		size;
	t_list	*previous;

	size = ft_list_size(*begin_list);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		previous = 0;
		while (j < size - i - 1)
			compare(begin_list, &previous, j++, cmp);
		i++;
	}
}
