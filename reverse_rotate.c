/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:26:11 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 14:15:37 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	while (first->next && first->next->next)
		first = first->next;
	second = first->next;
	first->next = NULL;
	second->next = *stack;
	*stack = second;
}

void	rra(t_list **x)
{
	int	ret;
	if (!x || !*x || !(*x)->next)
		return ;

	reverse_rotate(x);
	ret = write(1, "rra\n", 4);
	(void)ret;
}

void	rrb(t_list **y)
{
	int	ret;
	if (!y || !*y || !(*y)->next)
		return ;

	reverse_rotate(y);
	ret = write(1, "rrb\n", 4);
	(void)ret;
}

void	rrr(t_list **x, t_list **y)
{
	int	ret;
	if ((!x || !*x || !(*x)->next) && (!y || !*y || !(*y)->next))
		return ;

	reverse_rotate(x);
	reverse_rotate(y);
	ret = write(1, "rrr\n", 4);
	(void)ret;
}
