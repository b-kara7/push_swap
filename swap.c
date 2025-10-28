/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:36:53 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 14:16:40 by bkara            ###   ########.fr       */
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
	int	ret;
	if (!x || !*x || !(*x)->next)
		return ;
	
	swap(x);
	ret = write(1, "sa\n", 3);
	(void)ret;
}

void	sb(t_list **y)
{
	int	ret;
	if (!y || !*y || !(*y)->next)
		return ;
	
	swap(y);
	ret = write(1, "sb\n", 3);
	(void)ret;
}

void	ss(t_list **x, t_list **y)
{
	int	ret;
	if ((!x || !*x || !(*x)->next) && (!y || !*y || !(*y)->next))
		return ;
	
	swap(x);
	swap(y);
	ret = write(1, "ss\n", 3);
	(void)ret;
}
