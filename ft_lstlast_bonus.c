/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:37:51 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 13:23:29 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main ()
// {
// 	t_list *f, *m, *l;

// 	f = malloc(sizeof(t_list));
// 	m = malloc(sizeof(t_list));
// 	l = malloc(sizeof(t_list));
// 	f->content = "walid";
// 	m->content = "ob";
// 	l->content = "oiu";

// 	f->next = m;
// 	m->next = l;
// 	l->next = NULL;

// 	printf("%s",(char *)ft_lstlast(f)-> content);
// 	free(f);
// 	free(m);
// 	free(l);
// }
