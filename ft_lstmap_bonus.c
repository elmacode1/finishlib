/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:51 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 19:23:53 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstdelone(tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
// int main(){
//     t_list *new;
//     t_list *tmp;
//     t_list *head;
//     new = NULL;
//     char *ptr,*ptr2,*ptr3;
//     ptr = ft_strdup("hello");
//     ptr2= ft_strdup("hi");
//     ptr3= ft_strdup("hru");
//     ft_lstadd_back(&new,ft_lstnew(ptr));
//     ft_lstadd_back(&new,ft_lstnew(ptr2));
//     ft_lstadd_back(&new,ft_lstnew(ptr3));
//     tmp = new;
//     while(tmp){
//         printf("%s\n",(char *)tmp->content);
//         tmp = tmp->next;
//     }
//     head = ft_lstmap(new,toup,delete);
//     tmp = head;
//     while(tmp){
//         printf("%s\n",(char *)tmp->content);
//         tmp = tmp->next;
//    }
// }
