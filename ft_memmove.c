/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:08:52 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 17:54:57 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	i = 0;
	if (tmpdst > tmpsrc)
	{
		while (len-- > 0)
		{
			tmpdst[i] = tmpsrc[i];
		}
	}
	else
	{
		while (i < len)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
