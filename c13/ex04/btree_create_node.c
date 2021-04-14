/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:51:35 by manuel            #+#    #+#             */
/*   Updated: 2021/02/17 23:03:19 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = (t_btree *)malloc(sizeof(t_btree));
	elem->right = 0;
	elem->left = 0;
	elem->item = item;
	return (elem);
}
