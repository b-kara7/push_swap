/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:33 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 16:40:59 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	turk_algorithm(t_list **a, t_list **b)
{
	t_list	*best;
	int		size;

	size = ft_lstsize(*a);
	if (size == 1)
		return ;
	if (size == 2)
	{
		sort_two(a);
		return;
	}
	if (size == 3)
	{
		sort_three(a);
		return;
	}
	if (ft_lstsize(*a) > 3)
		pb(a, b);
	if (ft_lstsize(*a) > 3)
		pb(a, b);
	while (ft_lstsize(*a) > 3)
	{
		first_position(*a);
		first_position(*b);
		second_position(*a, *b);
		best = short_step(*a);
		back_best(a, best);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
	{
		first_position(*b);
		best = find_max(*b);
		back_best(b, best);
		pa(a, b);
	}
} */
