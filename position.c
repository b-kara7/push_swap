/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:34:38 by bkara             #+#    #+#             */
/*   Updated: 2025/10/20 22:06:53 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_position(t_list *a)//first_position = elemanların listedeki sırasını kaydetmek. konumunu bulmak
{
	int	i;

	i = 0;
	while (a)
	{
		a->index = i;
		a = a->next;
		i++;
	}
}

void	second_position(t_list *a, t_list *b)
{
	t_list	*tmp;
	int		target;

	while (a)
	{
		tmp = b;
		target = b->content; // şimdilik A’daki elemanın gitmesi gereken yer olarak ilk B elemanını alır.
		while (tmp) // b listesini dolaşıyoruz 
		{
			if (tmp->content > a->content) //  Eğer B’deki bir sayı (tmp->content), A’daki sayıdan büyükse (a->content), o sayı hedef olabilir, bu yüzden target’ı o değere eşitleriz.
				target = tmp->content;
			tmp = tmp->next;
		}
		a->index = target; //Bulduğumuz target değerini A’daki elemanın index alanına kaydederiz.
		a = a->next; // → Sonra sıradaki A elemanına geçeriz.
	}
}

void	third_position(t_list *a)
{
	int	size;
	int	half;

	size = ft_lstsize(a);
	half = size / 2;
	while (a)
	{
		if (a->index <= half)
			a->step = a->index; //üst yarıdaysa direk adım sayısı
		else
			a->step = size - a->index; //alt yarıdaysa ters döndürme
		a = a->next;
	}
}

t_list	*short_step(t_list *a)
{
	t_list	*best; //  şu ana kadar bulunan en az step’li elemanı tutuyor.
	t_list	*tmp; // listeyi gezen pointer (yani elinde geziyor), ikisininde başlangıcı a

	tmp = a;
	best = a;
	while (tmp)
	{
		if (tmp->step < best->step)
			best = tmp; //  yeni daha küçük step bulundu, best artık onu gösteriyor
		tmp = tmp->next; // tmp ileri gider
	}
	return (best);
}

void	back_best(t_list **a, t_list *best)
{
	while (*a != best)
	{
		if (best->index <= ft_lstsize(*a) / 2)
			ra(a);
		else
			rra(a);
	}
}
