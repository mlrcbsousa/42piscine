/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:23:57 by manuel            #+#    #+#             */
/*   Updated: 2021/02/15 20:23:42 by manuel           ###   ########.fr       */
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*prev;
	t_list	*new;

	new = ft_create_elem(data);
	if (!*begin_list || cmp((*begin_list)->data, data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		prev = ft_list_find(*begin_list, data, cmp);
		new->next = prev->next;
		prev->next = new;
	}
}
