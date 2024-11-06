/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:41:35 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/05 23:37:35 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*sub(char const *s, unsigned int start, size_t lenght, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	fin;

	i = 0;
	fin = start + len;
	if (fin > lenght)
		fin = lenght;
	ptr = malloc((fin - start + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (start + i < fin)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lenght;

	lenght = ft_strlen(s);
	if (start >= lenght || !s)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	return (sub(s, start, lenght, len));
}

// int main()
// {
// 	char *str = "21we2";
//  	size_t size = 10;
//  	char *ret = ft_substr(str,2 , 2);
// 	printf ("%s", ret);
// 	//free (ret);
// }
