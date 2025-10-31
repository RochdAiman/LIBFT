/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:36:23 by arochd            #+#    #+#             */
/*   Updated: 2025/10/17 11:32:30 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	s_len;
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < dst_size && dst[dst_len])
		dst_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (dst_len == dst_size)
		return (dst_len + s_len);
	i = 0;
	while (i < dst_size - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + s_len);
}
