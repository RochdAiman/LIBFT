/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:07:17 by arochd            #+#    #+#             */
/*   Updated: 2025/10/18 12:48:48 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*duplicated;

	len = ft_strlen(s);
	duplicated = malloc((len + 1) * sizeof(char));
	if (!duplicated)
		return (NULL);
	i = 0;
	while (i < len)
	{
		duplicated[i] = s[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
