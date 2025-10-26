/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:06:51 by betul             #+#    #+#             */
/*   Updated: 2025/10/26 17:06:51 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	duplicates(t_list *a)
{
	t_list	*tmp;
	t_list	*check;

	tmp = a;
	while (tmp != NULL)
	{
		check = tmp->next;
		while (check != NULL)
		{
			if (tmp->content == check->content)
				return (1);
			check = check->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	free_list(t_list *head)
{
	t_list	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}