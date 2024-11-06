/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:08:46 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 23:59:37 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
