/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:36:53 by bkara             #+#    #+#             */
/*   Updated: 2025/10/26 21:08:04 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_list **x)
{
	if (!x || !*x || !(*x)->next)
		return ;
	int	ret;

	swap(x);
	ret = write(1, "sa\n", 3);
	(void)ret;
}

void	sb(t_list **y)
{
	if (!y || !*y || !(*y)->next)
		return ;
	int	ret;

	swap(y);
	ret = write(1, "sb\n", 3);
	(void)ret;
}

void	ss(t_list **x, t_list **y)
{
	if ((!x || !*x || !(*x)->next) && (!y || !*y || !(*y)->next))
		return ;
	int	ret;

	swap(x);
	swap(y);
	ret = write(1, "ss\n", 3);
	(void)ret;
}
