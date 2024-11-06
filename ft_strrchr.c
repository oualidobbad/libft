/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:16:37 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 23:19:26 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			l;
	unsigned char	*str;

	l = ft_strlen(s);
	str = (unsigned char *)s;
	while (l > 0)
	{
		if (str[l] == (unsigned char)c)
			return ((char *)str + l);
		l--;
	}
	if (str[l] == (unsigned char)c)
		return ((char *)str + l);
	return (0);
}
// int main()
// {
// 	printf("%s ", ft_strrchr("aerefrrwwq", 'a'));
// }
