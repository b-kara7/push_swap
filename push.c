/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:40:41 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 14:17:12 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **start, t_list **end)
{
	t_list	*first;

	if (!start || !*start)
		return ;
	first = *start;
	*start = first->next;
	first->next = *end;
	*end = first;
}

void	pa(t_list **x, t_list **y)
{
	int ret;
	if (!y || !*y)
		return ;

		push(y, x);
	ret = write(1, "pa\n", 3);
	(void)ret;
}

void	pb(t_list **x, t_list **y)
{
	int	ret ;
	if (!x || !*x)
		return ;
	
	push(x, y);
	ret = write(1, "pb\n", 3);
	(void)ret;
}
