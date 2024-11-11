/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:07 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/11 14:23:35 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst || !del)
	{
		return ;
	}
	ptr = *lst;
	while (ptr != NULL)
	{
		del(ptr->content);
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*lst = NULL;
}
// void del(void *cont)
// {
//     printf("%s -> ", (char *)(cont));
//     //free(cont);
// }
//int main()
//{
//	t_list *p;
//	//t_list	*w;

//	p = NULL;
//	//w = ft_lstnew("obbad");
//	//ft_lstadd_back(&p, w);
//	ft_lstclear(&p, del);

//}
