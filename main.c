/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:50:45 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 23:03:47 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
void	print_list(t_list *lst)
{
    t_list	*current;

    current = lst;
    while (current)
    {
        printf("%d\n", current->content);
        current = current->next;
    }
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	else if (ac >= 2)
		parse_arguments(av, &a);
	duplicates(&a);
	small_sort(&a);
	if (is_sorted(a))
		return (free_lst(&a), 0);
	turk_algorithm(&a, &b);

	
	print_list(a);
	is_sorted(a);
	return (0);
}
