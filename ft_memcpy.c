/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:56:03 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/10 12:15:58 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*sr;

	i = 0;
	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
// int main()
// {
// 	char *dest;
// 	printf ("%s",*(char *)ft_memcpy(dest, "walid", 0));
// 	printf ("%s",*(char *)memcpy(dest, "walid", 0));
// }
