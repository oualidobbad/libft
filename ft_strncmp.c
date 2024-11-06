/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:47:48 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 00:21:40 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (((unsigned char)s1[i] == (unsigned char)s2[i]) && (i < n - 1)
		&& ((unsigned char)s2[i] || (unsigned char)s1[i]))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main()
// {
// 	// printf("%d\n", ft_strncmp("test", "test", 7));
// 	// printf("%d\n", strncmp("test", "test", 7));

// 	printf("%d\n", ft_strncmp("test\0", "test\200", 7));
// 	printf("%d ", strncmp("test\0", "test\200", 7));
// }
