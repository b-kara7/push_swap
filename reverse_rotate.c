/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:26:11 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 21:02:24 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	reverse_rotate(t_list **stack)
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
	reverse_rotate(x);
	write(1, "rra\n", 4);
}

void	rrb(t_list **y)
{
	reverse_rotate(y);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **x, t_list **y)
{
	reverse_rotate(x);
	reverse_rotate(y);
	write(1, "rrr\n", 4);
}
