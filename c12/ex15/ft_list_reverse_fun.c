/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:57:07 by manuel            #+#    #+#             */
/*   Updated: 2021/02/14 19:36:23 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(t_list *a, t_list *b)
{
	t_list	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*curr;
	t_list	*prev;
	t_list	*next;
	t_list	*tail;

	if (!begin_list || !begin_list->next)
		return ;
	tail = begin_list->next;
	while (tail->next)
		tail = tail->next;
	ft_swap(begin_list, tail);
	curr = tail;
	prev = 0;
	next = curr->next;
	curr->next = prev;
	prev = curr;
	curr = next;
	while (curr->next != tail)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	begin_list->next = curr;
}
