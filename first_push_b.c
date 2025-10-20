/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:01:22 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 21:04:10 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_push_b(t_list **a, t_list **b)
{
	if (!a || !(*a))// a boşsa, a pointi boşsa
		return;
	pb(a, b);// ilk elenemanı b ye at
	if (*a)//a da hala elemean varsa ikinciyide  at 
		pb(a, b);
}
