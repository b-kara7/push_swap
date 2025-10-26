/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:34:38 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 22:06:53 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_position(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
}

static int	calculate_rotate_cost(int pos, int size)
{
	if (pos <= size / 2)
		return (pos);
	return (size - pos);
}

static t_list	*find_best_target(t_list *a_node, t_list *b)
{
	t_list	*target;
	t_list	*tmp;
	int		closest;

	target = NULL;
	closest = 2147483647;
	tmp = b;
	while (tmp)
	{
		if (tmp->content > a_node->content && tmp->content < closest)
		{
			closest = tmp->content;
			target = tmp;
		}
		tmp = tmp->next;
	}
	if (!target)
	{
		closest = 2147483647;
		tmp = b;
		while (tmp)
		{
			if (tmp->content < closest)
			{
				closest = tmp->content;
				target = tmp;
			}
			tmp = tmp->next;
		}
	}
	return (target);
}

void	second_position(t_list *a, t_list *b)
{
	t_list	*target;
	int		size_a;
	int		size_b;
	int		cost_a;
	int		cost_b;

	size_a = ft_lstsize(a);
	size_b = ft_lstsize(b);
	while (a)
	{
		if (!b)
		{
			a->step = 0;
			a = a->next;
			continue;
		}
		target = find_best_target(a, b);
		cost_a = calculate_rotate_cost(a->index, size_a);
		if (target)
			cost_b = calculate_rotate_cost(target->index, size_b);
		else
			cost_b = 0;
		a->step = cost_a + cost_b;
		a = a->next;
	}
}

void	third_position(t_list *a)
{
	(void)a;
}

t_list	*short_step(t_list *a)
{
	t_list	*best;
	t_list	*tmp;

	tmp = a;
	best = a;
	while (tmp)
	{
		if (tmp->step < best->step)
			best = tmp;
		tmp = tmp->next;
	}
	return (best);
}

void	back_best(t_list **a, t_list *best)
{
	while (*a != best)
	{
		if (best->index <= ft_lstsize(*a) / 2)
			ra(a);
		else
			rra(a);
	}
}
