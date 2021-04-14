/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:33:58 by manuel            #+#    #+#             */
/*   Updated: 2021/02/10 23:54:08 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*elem;
	
	if (!*begin_list1 && !begin_list2)
		return ;
	if (!*begin_list1 && begin_list2)
		*begin_list1 = begin_list2;
	elem = *begin_list1;
	while (elem->next)
		elem = elem->next;
	if (begin_list2 && (begin_list2 != *begin_list1))
		elem->next = begin_list2;
}
