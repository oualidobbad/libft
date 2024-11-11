/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:46:23 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/11 00:34:19 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	if (!dest && size == 0)
	{
		return (ft_strlen(src));
	}
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (lendest >= size)
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

// int main()
//{
//	char dest[13] = "walid ";
//	char *src = "hello ";

//	ft_strlcat(dest, src, 8);
//	printf("%s", dest);	//printf("%ld \n", ft_strlcat(dest, src, 0));
//	//printf("%ld\n", strlcat(dest, src, 0));
//}
