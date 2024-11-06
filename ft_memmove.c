/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:34:33 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/02 20:48:02 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (src < dest)
	{
		i = size;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
