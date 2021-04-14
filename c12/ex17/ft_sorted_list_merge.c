/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:10:52 by manuel            #+#    #+#             */
/*   Updated: 2021/02/15 21:20:06 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list->next)
	{
		if (cmp(begin_list->next->data, data_ref) > 0)
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_sorted_list_insert(t_list **begin_list, t_list *new, int (*cmp)())
{
	t_list	*prev;

	if (!*begin_list || cmp((*begin_list)->data, new->data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		prev = ft_list_find(*begin_list, new->data, cmp);
		new->next = prev->next;
		prev->next = new;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*next;

	while (begin_list2)
	{
		next = begin_list2->next;
		ft_sorted_list_insert(begin_list1, begin_list2, cmp);
		begin_list2 = next;
	}
}
