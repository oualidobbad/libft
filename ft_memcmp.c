/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:01:34 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/04 20:23:46 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n <= 0)
	{
		return (0);
	}
	while (i < n - 1 && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
// int main()
// {
// int a = 1111;
// int b = 1111;
// 	//printf("%d\n", ft_memcmp(&a, &b, 4 * sizeof(int)));
// 	printf("%d\n", memcmp(&a, &b, 2 * sizeof(int)));
// }
