/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:34:21 by betul             #+#    #+#             */
/*   Updated: 2025/10/28 14:52:51 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    free_lst(t_list **lst)
{
    t_list	*tmp;
    t_list   *next;

    tmp = *lst;
    while (tmp)
    {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
}

void    free_lst_error(t_list **lst)
{
    t_list	*tmp;
    t_list   *next;

    tmp = *lst;
    while (tmp)
    {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    write(2, "Error\n", 6);
    exit(1);
}
