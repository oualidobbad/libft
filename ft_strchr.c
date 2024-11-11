/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:58:19 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/10 23:01:30 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		else
			str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}
// int main()
// {
// 	printf("%s ", strchr("ewqwe", ' '));
//	//printf("%s ", strchr(NULL, 'p'));
// }
