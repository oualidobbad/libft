/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:09:59 by oualid            #+#    #+#             */
/*   Updated: 2024/11/11 15:01:12 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, new);
		lst = lst->next;
	}
	return (node);
}

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*node;
// 	t_list	*new_node;

// 	node = NULL ;
// 	while (lst)
// 	{
// 		new_node = ft_lstnew(f(lst->content));
// 		if (!new_node)
// 		{
// 			ft_lstclear(&new_node, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&node, new_node);
// 		lst = lst -> next;
// 	}
// 	return (node);
// }
