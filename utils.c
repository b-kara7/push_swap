/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:39:13 by bkara             #+#    #+#             */
/*   Updated: 2025/10/18 19:52:37 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
	
int	ft_listsize(t_list *stack)
{
	int count;  // Elemanları saymak için sayaç
	t_list *tmp;  // Listede gezinmek için geçici bir işaretçi
	
	
	count = 0;
	tmp = stack;

	while (tmp !=NULL)
	{
		count++; // Bir eleman bulduk, sayacı 1 artır
		tmp = tmp ->next;
	}
	return(count);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	sign ;
	int	res ;

	i = 0;
	sign = 1;
	res = 0;
	
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
			i++;
	}
	return(sign * res);
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
void	ft_lstadd_back(t_list ** lst, t_list *new_node)
{
	t_list *tmp;

	if (new_node == NULL )
		return;
	if(*lst == NULL)
	{
		*lst = new_node; //new_node'u listenin ilk (ve tek) elemanı yap
		return;
	} //Liste boş değilse, listenin sonunu bul (Normal Durum)
	tmp = *lst;
	while (tmp->next !=NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node; //O son elemanın 'next'ine, yeni düğümümüzü ('new_node') bağla.
}