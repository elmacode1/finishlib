/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:40:19 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:42:47 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
// char capitalize_even(unsigned int i, char c) {
//         return toupper(c);
// }
// int main()
// {
//     char s[]= "hello world";
//     char *tmp = ft_strmapi(s,capitalize_even);
//     printf("%s",tmp);
// }
