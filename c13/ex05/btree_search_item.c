/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:33:04 by manuel            #+#    #+#             */
/*   Updated: 2021/02/18 00:02:15 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree	*node;

	if (!root)
		return (NULL);
	if ((node = btree_search_item(root->left, data_ref, cmpf)))
		return (node);
	if (!cmpf(data_ref, root->item))
		return (root);
	return (btree_search_item(root->right, data_ref, cmpf));
}
