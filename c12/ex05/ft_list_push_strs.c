/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 00:53:58 by manuel            #+#    #+#             */
/*   Updated: 2021/02/08 01:35:30 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	if (size == 0)
		return (0);
	list = ft_create_elem(*(strs + size - 1));
	list->next = ft_list_push_strs(size - 1, strs);
	return (list);
}
