/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:25:34 by arochd            #+#    #+#             */
/*   Updated: 2025/10/18 19:05:58 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total;
	char	*joinedstr;

	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = s1_len + s2_len;
	joinedstr = malloc(total + 1);
	if (!joinedstr)
		return (NULL);
	ft_memcpy(joinedstr, s1, s1_len);
	ft_memcpy(joinedstr + s1_len, s2, s2_len);
	joinedstr[total] = '\0';
	return (joinedstr);
}
