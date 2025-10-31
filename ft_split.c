/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:23:22 by arochd            #+#    #+#             */
/*   Updated: 2025/10/19 18:23:24 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	nbr;

	if (!s)
		return (0);
	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			nbr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbr);
}

static void	freeing(char **arr, int i)
{
	while (i >= 0)
		free(arr[i--]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	cntr;

	if (!s)
		return (NULL);
	strs = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	(1 == 1) && (i = 0, cntr = 0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		strs[cntr] = ft_substr(s, j, i - j);
		if (!strs[cntr++])
			return (freeing(strs, cntr - 1), NULL);
	}
	return (strs[cntr] = NULL, strs);
}
