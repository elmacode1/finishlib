/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:30:59 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 16:55:36 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * count));
	return (ptr);
}
/*int main()
{
    int *pt;
    int i=0;
    pt = calloc(5,4);
    while(i<5)
    {
        
       printf("pt[%d]=%d\n",i,pt[i]);
       i++; 
    }
   
}*/
