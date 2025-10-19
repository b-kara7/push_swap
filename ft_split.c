/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:02:37 by bkara             #+#    #+#             */
/*   Updated: 2025/10/19 19:17:59 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	ft_makewords(char *dst, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void	*ft_allfree(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**ft_fillstring(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	index;
	size_t	len;

	i = 0;
	index = 0;
	while (s[index])
	{
		len = 0;
		while (s[index + len] && s[index + len] != c)
			len++;
		if (len > 0)
		{
			arr[i] = malloc(sizeof(char) * (len + 1));
			if (!arr[i])
				return (ft_allfree(arr, i));
			ft_makewords(arr[i], s + index, len);
			i++;
			index += len;
		}
		else
			index++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	return (ft_fillstring(result, s, c));
}
