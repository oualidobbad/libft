/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:58:21 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 14:51:33 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// void del(void *cont)
// {
//     printf("%s -> ", (char *)(cont));
//    // free(cont);
// }

// int main()
// {
//     t_list *f, *m, *l;
// 	f = ft_lstnew("12");
// 	l = ft_lstnew("10");//creat list

//     ft_lstadd_back(&f, l); // add the list in the back

//     ft_lstclear(&f, del); //clear list

//     return (0);
// }
