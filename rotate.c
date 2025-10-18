/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:04:30 by bkara             #+#    #+#             */
/*   Updated: 2025/10/18 20:37:41 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if(!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	second = (*stack)->next;
	*stack = second;

	while(second->next)
		second = second->next;

	second->next = first;
	first->next = NULL;
}
void	ra(t_list **x)
{
	rotate(x);
	write(1, "ra\n", 3);
}
void	rb(t_list **y)
{
	rotate(y);
	write(1, "rb\n", 3);
}
void	rr(t_list **x, t_list **y)
{
	rotate(x);
	rotate(y);
	write(1, "rr\n", 3);
}