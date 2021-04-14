/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:37:43 by manuel            #+#    #+#             */
/*   Updated: 2021/02/09 00:17:34 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	**start;
	t_list	*prev;
	t_list	*next;

	start = begin_list;
	prev = 0;
	while (*begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = *begin_list;
		*begin_list = next;
	}
	*start = prev;
}
