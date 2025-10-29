/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:33 by bkara             #+#    #+#             */
/*   Updated: 2025/10/29 15:13:32 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_algorithm(t_list **a, t_list **b)
{
	int min;
	
	pb(a, b);
	pb(a, b);
	push_to_b(a, b);
	small_sort(a);
	push_to_a(a, b);
	
	min = min_number(*a);
	if (is_first_half(*a, min))
	{
		while ((*a)->content != min)
			ra(a);
	}
	else
	{
		while ((*a)->content != min)
			rra(a);
	}
} 