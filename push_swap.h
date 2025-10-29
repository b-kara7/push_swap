/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:12:36 by bkara             #+#    #+#             */
/*   Updated: 2025/10/29 13:54:18 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				step;
	struct s_list	*next;
}	t_list;

int		ft_lstsize(t_list *stack);
void	turk_algorithm(t_list **a, t_list **b);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
char	**ft_split(char const *s, char c);
void	ft_free_split(char **res);
int	ft_atoi_ps(const char *str, t_list **a, char **words);
void	parse_arguments(char **argv, t_list **stack_a);
void	duplicates(t_list **a);
void	free_lst(t_list **lst);
int		is_sorted(t_list *a);
void    free_lst(t_list **lst);
void    free_lst_error(t_list **lst);
void    small_sort(t_list **a);
void	parse_arguments(char **argv, t_list **a);

int	min_number(t_list *stack);
int	max_number(t_list *stack);
void	push_to_b(t_list **a, t_list **b);
void	push_to_a(t_list **a, t_list **b);
int	calc_min_cost_a(t_list *a, t_list *b, int a_num);
int cost_calculator(t_list *lst, int number);
int	target_in_b(int a_number, t_list *b);
int	target_in_a(int b_number, t_list *a);
int	is_first_half(t_list *lst, int number);
int	find_cheapest_a(t_list *a, t_list *b);
int	calc_min_cost_b(t_list *a, t_list *b, int b_num);
int	find_cheapest_b(t_list *a, t_list *b);
void	move_up_a(int number, t_list **a);
void	move_up_b(int number, t_list **b);
void	push_to_b(t_list **a, t_list **b);
void	push_to_a(t_list **a, t_list **b);

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
