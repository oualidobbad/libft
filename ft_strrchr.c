/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:16:37 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/11 16:12:46 by oobbad           ###   ########.fr       */
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
	return (NULL);
}
//#include <stdio.h>
//#include <string.h>
// int main()
// {
// 	printf("%s\n", strrchr("walid", ));
// }
