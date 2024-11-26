/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:36 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 20:57:01 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s,char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while ((s[i] == c) && s[i])
			i++;
		while (!(s[i] == c) && s[i])
			i++;
		i--;
		if (!(s[i] == c) && s[i])
			count++;
		i++;
	}
	return (count);
}

int	word_len(char const *s, int i, char c)
{
	int	count;

	count = 0;
	while (!(s[i] == c) && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

int	fill(char **str, char const *s, int i, int k, char c)
{
	int	j;

	j = 0;
	while ((s[k] == c) && s[k])
		k++;
	str[i] = malloc(sizeof(char) * (word_len(s, k,c) + 1));
	while (!(s[k] == c) && s[k])
	{
		str[i][j] = s[k];
		j++;
		k++;
	}
	str[i][j] = '\0';
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * countwords(s,c));
	if (!str)
		return (NULL);
	while (s[k])
	{
		k = fill(str, s, i, k,c);
		i++;
	}
	return (str);
} 
// int main()
// {

//     char **str = ft_split(s, ' ');
//     if(str)
//     printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
   
// }
