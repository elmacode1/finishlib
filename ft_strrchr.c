/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:40:59 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:52:39 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			ptr = (char *) &s[i];
		i++;
	}
	if (ptr)
		return (ptr);
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*int main()
{
    char *s = ft_strrchr("mem",'e');
    printf("%s\n",s);
    printf("%s",strrchr("mem",'e'));
}*/
