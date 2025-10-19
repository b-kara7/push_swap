/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:40:41 by bkara             #+#    #+#             */
/*   Updated: 2025/10/19 19:15:30 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	push(t_list **start, t_list **end)
{
	t_list	*first;
	
	if (!start || !*start)
		return;
	first = *start;
	*start = first->next;
	first->next = *end;
	*end = first;
}
void	pa(t_list **x, t_list **y)
{
	push(y, x);
	write(1, "pa\n", 3);
}
void	pb(t_list **x, t_list **y)
{
	push(x, y);
	write(1, "pb\n", 3);
}
