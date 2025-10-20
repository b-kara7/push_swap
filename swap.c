/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:36:53 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 19:24:25 by bkara            ###   ########.fr       */
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
	swap(x);
	write(1, "sa\n", 3);
}

void	sb(t_list **y)
{
	swap(y);
	write(1, "sb\n", 3);
}

void	ss(t_list **x, t_list **y)
{
	swap(x);
	swap(y);
	write(1, "ss\n", 3);
}
