/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:47 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 17:23:06 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//     t_list *s;
//     s = ft_lstnew("malak");
//     ft_lstadd_front(&s,ft_lstnew("helllo"));
//     printf("%s\n",(char *)s->content);
//     printf("%s\n",(char *)ft_lstlast(s)->content);
// }
