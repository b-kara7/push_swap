/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:06:51 by betul             #+#    #+#             */
/*   Updated: 2025/10/28 15:04:54 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	duplicates(t_list **a)
{
	t_list	*tmp;
	t_list	*check;

	tmp = *a;
	while (tmp != NULL)
	{
		check = tmp->next;
		while (check != NULL)
		{
			if (tmp->content == check->content)
				free_lst_error(a);
			check = check->next;
		}
		tmp = tmp->next;
	}
}
