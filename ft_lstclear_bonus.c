/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:07 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 14:35:59 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	ptr = *lst;
	if (!lst || !del)
	{
		return ;
	}
	while (ptr != NULL)
	{
		del(ptr->content);
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*lst = NULL;
}
