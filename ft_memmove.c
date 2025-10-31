/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:27:22 by arochd            #+#    #+#             */
/*   Updated: 2025/10/25 18:58:05 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;

	if ((!dest && !src) && n > 0)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	source = (char *)src;
	dst = (char *)dest;
	if (dst < source)
		ft_memcpy(dst, source, n);
	else
	{
		while (n > 0)
		{
			n--;
			dst[n] = source[n];
		}
	}
	return (dest);
}
