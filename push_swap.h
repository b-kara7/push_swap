/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:36 by bkara             #+#    #+#             */
/*   Updated: 2025/10/26 20:48:38 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				step;
	struct s_list	*next;
}	t_list;

void	first_push_b(t_list **a, t_list **b);
int		ft_lstsize(t_list *stack);
t_list	*find_max(t_list *stack);
void	turk_algorithm(t_list **a, t_list **b);
void	big_chunk(t_list **a, t_list **b);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
char	**ft_split(char const *s, char c);
void	ft_free_split(char **res);
int		ft_atoi_ps(const char *str);
void	sort_three(t_list **a);
void	sort_two(t_list **a);
void	ft_error_exit(void);
int		duplicates(t_list *a);
void	free_list(t_list *head);
int		is_sorted(t_list *a);

void	first_position(t_list *a);
void	second_position(t_list *a, t_list *b);
void	third_position(t_list *a);
void	back_best(t_list **a, t_list *best);
t_list	*short_step(t_list *a);

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
