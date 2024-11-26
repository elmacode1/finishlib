/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:59 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:29:02 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	ft_strlcat(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (res);
}
// int main(){
//     char *s1=NULL;
//     char s2[]=" how are u";
//     char *res = ft_strjoin(s1 ,s2);
//     printf("%s",res);
// }
