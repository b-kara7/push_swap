/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_utils_three.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:45:24 by betul             #+#    #+#             */
/*   Updated: 2025/10/29 13:58:28 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_up_a(int number, t_list **a)
{
	if (is_first_half(*a, number) == 1)
	{
		while ((*a)->content != number)
			ra(a);
	}
	else
	{
		while ((*a)->content != number)
			rra(a);
	}
}

void	move_up_b(int number, t_list **b)
{
	if (is_first_half(*b, number) == 1)
	{
		while ((*b)->content != number)
			rb(b);
	}
	else
	{
		while ((*b)->content != number)
			rrb(b);
	}
}

void	push_to_b(t_list **a, t_list **b)
{
	int best;

    while (ft_lstsize(*a) > 3)
	{
		best = find_cheapest_a(*a, *b);
		move_up_a(best, a);
		move_up_b(target_in_b(best, *b), b);
        pb(a, b);
    }
}

void	push_to_a(t_list **a, t_list **b)
{
	int best;

    while (*b)
	{
		best = find_cheapest_b(*a, *b);
		move_up_a(target_in_a(best, *a), a);
		move_up_b(best, b);
        pa(a, b);
    }
}