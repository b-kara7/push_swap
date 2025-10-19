/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:36 by bkara             #+#    #+#             */
/*   Updated: 2025/10/19 20:41:06 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

void	first_push_b(t_list **a, t_list **b);
int	ft_listsize(t_list *stack);
void	turk_algorithm(t_list **a, t_list **b);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list ** lst, t_list *new_node);
char	**ft_split(char const *s, char c);
int	ft_atoi_ps(const char *str);

void	sa(t_list **x);
void	sb(t_list **y);
void	ss(t_list **x, t_list **y);

void	pa(t_list **x, t_list **y);
void	pb(t_list **x, t_list **y);

void	ra(t_list **x);
void	rb(t_list **y);
void	rr(t_list **x, t_list **y);

void	rra(t_list **x);
void	rrb(t_list **y);
void	rrr(t_list **x, t_list **y);

#endif
