/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:39:13 by bkara             #+#    #+#             */
/*   Updated: 2025/10/26 21:08:07 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
	
int	ft_lstsize(t_list *stack)
{
	int	count;  // Elemanları saymak için sayaç
	t_list	*tmp;  // Listede gezinmek için geçici bir işaretçi
	
	count = 0;
	tmp = stack;

	while (tmp != NULL)
	{
		count++; // Bir eleman bulduk, sayacı 1 artır
		tmp = tmp ->next;
	}
	return (count);
}

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;
	
	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return NULL;
	new_node ->content = content; // gelen sayıyı (content) ata.
	new_node ->index = 0;
	new_node->next = NULL; // yap (çünkü bu şimdilik son eleman).
	return (new_node);
}
// ft_atoi ile sayıyı aldık, lstnew ile kutuya yani new_node a koyduk 
void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*tmp;

	if (!new_node)
		return;
	if (!*lst)
	{
		*lst = new_node; //new_node'u listenin ilk (ve tek) elemanı yap
		return;
	} //Liste boş değilse, listenin sonunu bul (Normal Durum)
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node; //O son elemanın 'next'ine, yeni düğümümüzü ('new_node') bağla.
}

t_list	*find_max(t_list *stack)
{
	t_list	*max_node;
	t_list	*tmp;

	if (!stack)
		return (NULL);
	max_node = stack;
	tmp = stack;
	while (tmp)
	{
		if (tmp->content > max_node->content)
			max_node = tmp;
		tmp = tmp->next;
	}
	return (max_node);
}
