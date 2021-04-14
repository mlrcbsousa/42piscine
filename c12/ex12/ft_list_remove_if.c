/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:03:54 by manuel            #+#    #+#             */
/*   Updated: 2021/02/10 23:16:04 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*next;
	t_list	*current;
	t_list	*previous;

	previous = 0;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		if (!cmp(current->data, data_ref))
		{
			free_fct(current->data);
			if (current == *begin_list)
				*begin_list = next;
			free(current);
			if (previous)
				previous->next = next;
		}
		else
			previous = current;
		current = next;
	}
}
