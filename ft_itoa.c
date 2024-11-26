/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:37:59 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 17:14:21 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	tmp;
	char	*s;

	nb = n;
	tmp = nb;
	if (nb == 0)
		return (ft_strdup("0"));
	s = malloc(sizeof(char) * (len(nb) + 1));
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		s[len(nb) - 1] = nb % 10 + 48;
		nb = nb / 10;
	}
	s[len(tmp)] = '\0';
	return (s);
}
