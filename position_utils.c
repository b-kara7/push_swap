/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:42:22 by betul             #+#    #+#             */
/*   Updated: 2025/10/29 13:43:15 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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