/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:52:38 by betul             #+#    #+#             */
/*   Updated: 2025/10/28 15:01:56 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_two(t_list **a)
{
    if ((*a)->content > (*a)->next->content)
        sa(a);
}

static void sort_three(t_list **a)
{
    int first;
    int second;
    int third;

    first = (*a)->content;
    second = (*a)->next->content;
    third = (*a)->next->next->content;
    
    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

void    small_sort(t_list **a)
{
    int size;

    size = ft_lstsize(*a);
    if (size == 1)
    {
        free_lst(a);
        exit(0);
    }
    if (size == 2)
        sort_two(a);
    else if (size == 3)
        sort_three(a);
}