/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:50:45 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 16:45:21 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

/* static int	is_valid_number(char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	if (!str || !str[0])
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str[i + 1] || (str[i + 1] < '0' || str[i + 1] > '9'))
			return (0);
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		num = num * 10 + (str[i] - '0');
		if ((num * sign) > INT_MAX || (num * sign) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

static int	check_numbers(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		if (!is_valid_number(res[i]))
			return (0);
		i++;
	}
	return (1);
} */

/* static void	push_all(t_list **a, char **res)
{
	int		i;
	t_list	*new;
	
	i = 0;
	while (res[i])
	{
		new = ft_lstnew(ft_atoi_ps(res[i]));
		ft_lstadd_back(a, new);
		i++;
	}
} */
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
	//t_list	*b;

	a = NULL;
	//b = NULL;
	if (ac < 2)
		return (0);
	if (ac >= 2)
		parse_arguments(av, &a);
	print_list(a);
	free_lst(&a);
	
		
	/* push_all(&a, res);
	if (duplicates(&a))
	{
		free_list(a);
		if (ac == 2)
			ft_free_split(res);
		ft_error_exit();
	}
	if (is_sorted(a))
	{
		free_list(a);
		if (ac == 2)
			ft_free_split(res);
		return (0);
	}
	if (ft_lstsize(a) == 2)
		sort_two(&a);
	else if (ft_lstsize(a) == 3)
		sort_three(&a);
	else if (ft_lstsize(a) > 3)
		turk_algorithm(&a, &b);
	free_list(a);
	if (ac == 2)
		ft_free_split(res);
	return (0); */
}
