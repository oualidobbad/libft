/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                      ,                              +:+ +:+
	+:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:23:40 by oobbad            #+#    #+#             */
/*   Updated: 2024/10/26 15:51:32 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
//int main()
//{
//	char s[7] = "wali";

//	printf("%s", (char *)ft_memset(s, '0', 3));
//}
