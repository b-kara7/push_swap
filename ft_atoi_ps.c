/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:27:28 by bkara             #+#    #+#             */
/*   Updated: 2025/10/19 20:41:34 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	ft_atoi_ps(const char *str)
{
	long	res;
	int		sign;
	int		i;
	
	res = 0;
	sign = 1;
	i = 0;
	if (!str || !str[0])
		ft_error_exit();
	if(str[i] == '-' || str[i] == '+')
	{
		if (!str[i + 1] || (str[i + 1] < '0' || str[i + 1] > '9'))
			ft_error_exit();
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error_exit();
		res = res * 10 + (str[i++] - '0');
		if((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			ft_error_exit();
	}
	return ((int)(res * sign));
}