/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:27:28 by bkara             #+#    #+#             */
/*   Updated: 2025/10/28 15:59:57 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void free_exit(t_list **a, char **words)
{
	ft_free_split(words);
	free_lst_error(a);
}
static int	get_sign(const char *s, int i, t_list **a, char **words)
{
	int	sign;

	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (!s[i + 1] || (s[i + 1] < '0' || s[i + 1] > '9'))
			free_exit(a, words);
		if (s[i] == '-')
			sign = -1;
	}
	return (sign);
}

int	ft_atoi_ps(const char *str, t_list **a, char **words)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	i = 0;
	if (!str)
		free_exit(a, words);
	sign = get_sign(str, i, a, words);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			free_exit(a, words);
		res = res * 10 + (str[i] - '0');
		i++;
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			free_exit(a, words);
	}
	return ((int)(res * sign));
}
