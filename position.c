/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:34:38 by bkara             #+#    #+#             */
/*   Updated: 2025/10/29 14:55:00 by betul            ###   ########.fr       */
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
    int size;
	
    size = ft_lstsize(lst);
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
		cost = size - cost;
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