/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:45:58 by msousa            #+#    #+#             */
/*   Updated: 2021/01/08 23:02:58 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int *start;
	int *end;
	int buffer;

	start = tab;
	end = tab + size - 1;
	while (start < end)
	{
		buffer = *start;
		*start = *end;
		*end = buffer;
		start++;
		end--;
	}
}
