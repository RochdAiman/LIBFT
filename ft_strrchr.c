/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:37 by arochd            #+#    #+#             */
/*   Updated: 2025/10/17 17:13:12 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cc;

	cc = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	if (cc == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if ((unsigned char)s[i] == cc)
			return ((char *)(s + i));
	}
	return (NULL);
}
