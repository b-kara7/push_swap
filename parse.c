/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betul <betul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:34:26 by betul             #+#    #+#             */
/*   Updated: 2025/10/28 16:25:48 by betul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_and_add(char *arg, t_list **a)
{
	char	**words;
	int		i;
	t_list	*new;

	words = ft_split(arg, ' ');
	i = 0;
	while (words[i])
	{
		new = ft_lstnew(ft_atoi_ps(words[i], a, words));
		ft_lstadd_back(a, new);
		i++;
	}
	ft_free_split(words);
}

void	parse_arguments(char **argv, t_list **a)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		parse_and_add(argv[i], a);
		i++;
	}
}