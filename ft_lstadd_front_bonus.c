/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:37:14 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 11:15:55 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main() {
//    t_list **first, *middle, *last;
//    first = malloc(sizeof(t_list *));
//    *first = malloc(sizeof(t_list));
//    middle = malloc(sizeof(t_list));
//    last = malloc(sizeof(t_list));

//    int a = 10;
//    int b = 20;
//    int c = 30;

//    (*first)->content = &a;
//    middle->content = &b;
//    last->content = &c;

//    (*first)->next = middle;
//    middle->next = NULL;

//    ft_lstadd_front(first, last);

//    t_list *ptr = *first;
//    while (ptr != NULL) {
//        printf("%d ", *(int *)(ptr->content));
//        ptr = ptr->next;
//    }
// }
