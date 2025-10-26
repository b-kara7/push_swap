/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:48:25 by betul             #+#    #+#             */
/*   Updated: 2025/10/26 20:48:30 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min(t_list *stack)
{
	int		min;
	t_list	*tmp;

	tmp = stack;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

static int	get_number(t_list *stack, int n)
{
	t_list	*tmp;
	int		min;
	int		i;

	i = 0;
	while (i < n)
	{
		min = find_min(stack);
		tmp = stack;
		while (tmp)
		{
			if (tmp->content == min)
				tmp->content = 2147483647;
			tmp = tmp->next;
		}
		i++;
	}
	min = find_min(stack);
	tmp = stack;
	while (tmp)
	{
		if (tmp->content == 2147483647)
			tmp->content = min;
		tmp = tmp->next;
	}
	return (min);
}

static void	push_to_b(t_list **a, t_list **b, int limit)
{
	int	size;
	int	i;

	size = ft_lstsize(*a);
	i = 0;
	while (i < size && ft_lstsize(*a) > 3)
	{
		first_position(*a);
		if ((*a)->content <= limit)
		{
			pb(a, b);
		}
		else
		{
			if ((*a)->index <= size / 2)
				ra(a);
			else
				rra(a);
		}
		i++;
	}
}

void	big_chunk(t_list **a, t_list **b)
{
	int		size;
	int		chunks;
	int		group_size;
	int		i;
	t_list	*best;

	size = ft_lstsize(*a);
	if (size <= 100)
		chunks = 5;
	else
		chunks = 11;
	group_size = size / chunks;
	i = 1;
	while (i <= chunks && ft_lstsize(*a) > 3)
	{
		push_to_b(a, b, get_number(*a, i * group_size));
		i++;
	}
	if (ft_lstsize(*a) == 3)
		sort_three(a);
	while (*b)
	{
		first_position(*b);
		best = find_max(*b);
		back_best(b, best);
		pa(a, b);
	}
}
