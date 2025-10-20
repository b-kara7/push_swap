/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:33 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 22:04:48 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_algorithm(t_list **a, t_list **b)
{
	t_list	*best;

	first_push_b(a, b);
	while (ft_lstsize(*a) > 3)
	{
		first_position(*a);
		second_position(*a, *b);
		third_position(*a);
		best = short_step(*a);
		back_best(a, best);
		pb(a, b);
	}
	sort_three(a);
	while (b)
		pa(a, b);
}

void	sort_two(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

void	sort_three(t_list **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->content;
	y = (*a)->next->content;
	z = (*a)->next->next->content;
	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}
