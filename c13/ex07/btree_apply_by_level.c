/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 00:15:00 by manuel            #+#    #+#             */
/*   Updated: 2021/02/19 01:28:51 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	height_l;
	int	height_r;

	if (!root)
		return (0);
	height_l = btree_level_count(root->left);
	height_r = btree_level_count(root->right);
	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}

typedef struct s_app
{
	int	level;
	int	level_i;
	int	*is_first;
	void	(*applyf)(void *a, int b, int c);
}	t_app;

void	apply_at_level(t_btree *root, t_app self)
{
	if (!root)
		return ;
	if (!self.level_i)
	{
		self.applyf(root->item, self.level, *self.is_first);
		if (*self.is_first)
			*self.is_first = 0;
	}
	else if (self.level_i > 0)
	{
		self.level_i--;
		apply_at_level(root->left, self);
		apply_at_level(root->right, self);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int		count;
	int		level;
	int		is_first;
	t_app	self;

	level = 0;
	count = btree_level_count(root);
	while (level < count)
	{
		is_first = 1;
		self.applyf = applyf;
		self.level = level;
		self.level_i = level;
		self.is_first = &is_first;
		apply_at_level(root, self);
		level++;
	}
}
