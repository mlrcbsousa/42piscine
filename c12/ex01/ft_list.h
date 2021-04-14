/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 18:27:25 by manuel            #+#    #+#             */
/*   Updated: 2021/02/07 23:06:23 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
