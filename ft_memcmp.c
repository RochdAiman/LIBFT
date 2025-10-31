/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:26:13 by arochd            #+#    #+#             */
/*   Updated: 2025/10/17 20:51:38 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*mb1;
	const unsigned char	*mb2;
	size_t				i;

	mb1 = (const unsigned char *)s1;
	mb2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mb1[i] != mb2[i])
			return ((int)mb1[i] - (int)mb2[i]);
		i++;
	}
	return (0);
}
