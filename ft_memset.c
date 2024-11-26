/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:09:14 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 17:56:34 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)b;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main() {
int a=12;
printf("%d\n",a);
ft_memset( &a,255,4);
ft_memset( &a,253,3);
ft_memset( &a,25,2);
ft_memset( &a,208,1);
printf("%d",a);
  return 0;
}*/
