/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:45:19 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 19:26:44 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit(void)
{
	int	ret;

	ret = write(2, "Error\n", 6);
	(void)ret;
	exit(1);
}

void	number_error(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		ft_error_exit();
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str)
			ft_error_exit();
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error_exit();
		i++;
	}
}
