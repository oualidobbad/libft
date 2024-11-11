/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:58:21 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/11 14:54:31 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}
// void del(void *cont)
// {
//     printf("%s -> ", (char *)(cont));
//    // free(cont);
// }

// int main()
// {
//     t_list *f;
// 	f = ft_lstnew("12");
// 	//l = ft_lstnew("10");//creat list

//     ft_lstadd_back(&f, NULL); // add the list in the back

//     ft_lstclear(&f, del); //clear list

//     return (0);
// }
