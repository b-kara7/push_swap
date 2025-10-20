/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:27:28 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 22:11:46 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static int	get_sign(const char *s, int i)
{
	int	sign;

	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (!s[i + 1] || (s[i + 1] < '0' || s[i + 1] > '9'))
			ft_error_exit();
		if (s[i] == '-')
			sign = -1;
	}
	return (sign);
}

int	ft_atoi_ps(const char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	i = 0;
	if (!str || !str[0])
		ft_error_exit();
	sign = get_sign(str, i);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error_exit();
		res = res * 10 + (str[i] - '0');
		i++;
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			ft_error_exit();
	}
	return ((int)(res * sign));
}
