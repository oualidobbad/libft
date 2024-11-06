/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:46:23 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/04 02:02:34 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	if (size <= lendest || size == 0)
	{
		return (lensrc + size);
	}
	while (i < size - 1 - lendest && src[i])
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
