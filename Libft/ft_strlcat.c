/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:44:44 by nfiamma           #+#    #+#             */
/*   Updated: 2025/10/15 23:52:23 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	len_dst = i;
	if (dstsize == 0)
		return (len_dst + ft_strlen(src));
	while (src[j] && i + 1 < dstsize)
		dst[i++] = src[j++];
	if (len_dst < dstsize)
		dst[i] = '\0';
	while (src[j])
		j++;
	return (len_dst + j);
}
