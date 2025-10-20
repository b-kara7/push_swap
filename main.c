/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:50:45 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 22:02:12 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_all(t_list **a, char **res)
{
	int	i;
	t_list *new;
	
	i = 0;
	while (res[i])
	{
		new = ft_lstnew(ft_atoi_ps(res[i]));
		ft_lstadd_back(a, new);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	**res;

	a = NULL;
	b = NULL;
	res = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		res = (ft_split(av[1], ' '));
		if (!res)
			return (1);
	}
	else
		res = av + 1;
	push_all(&a, res);
	turk_algorithm(&a, &b);
	if (ac == 2)
		ft_free_split(res);
	return (0);
}
