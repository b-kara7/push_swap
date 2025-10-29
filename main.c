/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:50:45 by bkara             #+#    #+#             */
/*   Updated: 2025/10/29 14:00:36 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	free_lst(&a);
	return (0);
}
