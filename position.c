/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:34:38 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 23:04:57 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_first_half(t_list *lst, int number)
{
	int	size;
	int	position;

	size = ft_lstsize(lst);
	position = 0;
	while (lst)
	{
		if (lst->content == number)
			break ;
		position++;
		lst = lst->next;
	}
	if (position <= size / 2)
		return (1);
	else
		return (0);
}

int	cost_calculator(t_list *lst, int number)
{
	int	cost;
	int	half;
	
	half = is_first_half(lst, number);
	cost = 0;
	while (lst)
	{
		if (lst->content == number)
			break ;
		cost++;
		lst = lst->next;
	}
	if (half == 0)
		cost = ft_lstsize(lst) - cost;
	return (cost);
}

int	target_in_b(int a_number, t_list *b)
{
    t_list	*temp;
    int		result;
    int		check;

    check = 0;
    temp = b;
    result = -2147483648;
    while (temp)
    {
        if (temp->content < a_number)
        {
            if (temp->content >= result)
            {
                check = 1;
                result = temp->content;
            }
        }
        temp = temp->next;
    }
    if (!check)
        return (max_number(b));
    return (result);
}

int	target_in_a(int b_number, t_list *a)
{
    t_list	*temp;
    int		result;
    int		check;

    check = 0;
    temp = a;
    result = 2147483647;
    while (temp)
    {
        if (temp->content > b_number)
        {
            if (temp->content <= result)
            {
                check = 1;
                result = temp->content;
            }
        }
        temp = temp->next;
    }
    if (!check)
        return (min_number(a));
    return (result);
}

int	calc_min_cost_a(t_list *a, t_list *b, int a_num)
{
    int	cost_a;
    int	cost_b;
    int	target;

    cost_a = cost_calculator(a, a_num);
    target = target_in_b(a_num, b);
    cost_b = cost_calculator(b, target);
    return (cost_a + cost_b);
}
int	find_cheapest_a(t_list *a, t_list *b)
{
    t_list	*temp;
    int		min_cost;
    int		cheapest_num;
    int		cost;

    temp = a;
    min_cost = INT_MAX;
    cheapest_num = 0;
    while (temp)
    {
        cost = calc_min_cost_a(a, b, temp->content);
        if (cost < min_cost)
        {
            min_cost = cost;
            cheapest_num = temp->content;
        }
        temp = temp->next;
    }
    return (cheapest_num);
}

int	calc_min_cost_b(t_list *a, t_list *b, int b_num)
{
    int	cost_a;
    int	cost_b;
    int	target;

    cost_b = cost_calculator(b, b_num);
    target = target_in_a(b_num, a);
    cost_a = cost_calculator(a, target);
    return (cost_a + cost_b);
}

int	find_cheapest_b(t_list *a, t_list *b)
{
    t_list	*temp;
    int		min_cost;
    int		cheapest_num;
    int		cost;

    temp = b;
    min_cost = INT_MAX;
    cheapest_num = 0;
    while (temp)
    {
        cost = calc_min_cost_b(a, b, temp->content);
        if (cost < min_cost)
        {
            min_cost = cost;
            cheapest_num = temp->content;
        }
        temp = temp->next;
    }
    return (cheapest_num);
}

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
			ra(b);
	}
	else
	{
		while ((*b)->content != number)
			rra(b);
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

    while (b)
	{
		best = find_cheapest_b(*a, *b);
		move_up_a(target_in_a(best, *a), a);
		move_up_b(best, b);
        pa(a, b);
    }
}
