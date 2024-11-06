/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:38:32 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/03 11:38:35 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	ptr = lst;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}

// int main ()
//{
//	t_list *f, *m, *l;

//	f = malloc(sizeof(t_list));
//	m = malloc(sizeof(t_list));
//	l = malloc(sizeof(t_list));

//	f->content = "walid";
//	m->content = "ob";
//	l->content = "oiu";

//	f->next = m;
//	m->next = l;
//	l->next = NULL;

//	printf("%d",ft_lstsize(f));
//	free(f);
//	free(m);
//	free(l);
//}
