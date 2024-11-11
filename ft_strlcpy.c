/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:46:40 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/10 21:56:22 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
//int main()
//{
//	char dest[12] = "walid";
//	char const *src = "hello";

//	strlcpy(dest, src, 5);
//	printf("%s", dest);
//	//printf ("%ld \n", ft_strlcpy(dest, src, 2));
//	//printf ("%ld \n", strlcpy(dest, src, 2));
//}
