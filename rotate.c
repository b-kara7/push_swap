/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:04:30 by bkara             #+#    #+#             */
/*   Updated: 2025/10/26 21:07:18 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	*stack = second;
	while (second->next)
		second = second->next;
	second->next = first;
	first->next = NULL;
}

void	ra(t_list **x)
{
	if (!x || !*x || !(*x)->next)
		return ;
	int	ret;

	rotate(x);
	ret = write(1, "ra\n", 3);
	(void)ret;
}

void	rb(t_list **y)
{
	if (!y || !*y || !(*y)->next)
		return ;
	int	ret;

	rotate(y);
	ret = write(1, "rb\n", 3);
	(void)ret;
}

void	rr(t_list **x, t_list **y)
{
	if ((!x || !*x || !(*x)->next) && (!y || !*y || !(*y)->next))
		return ;
	int	ret;

	rotate(x);
	rotate(y);
	ret = write(1, "rr\n", 3);
	(void)ret;
}
