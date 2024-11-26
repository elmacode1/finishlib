/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:40:03 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:31:56 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (ft_strlen(dst) == dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	if (dstsize > (ft_strlen(dst) + ft_strlen(src)))
	{
		while (src[i])
		{
			dst[ft_strlen(dst) + i] = src[i];
			i++;
		}
		dst[ft_strlen(dst) + i + 1] = '\0';
	}
	else if (dstsize - 1 > ft_strlen(dst))
	{
		while (src[i] && i + ft_strlen(dst) < (dstsize - 1))
		{
			dst[ft_strlen(dst) + i] = src[i];
			i++;
		}
		dst[ft_strlen(dst) + i] = '\0';
	}
	return (ft_strlen(src) + ft_strlen(dst));
}
