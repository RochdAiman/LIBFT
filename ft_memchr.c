/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:50:40 by arochd            #+#    #+#             */
/*   Updated: 2025/10/17 19:21:56 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*mb;
	unsigned char			cc;

	cc = (unsigned char)c;
	mb = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mb[i] == cc)
			return ((void *)mb + i);
		i++;
	}
	return (NULL);
}
