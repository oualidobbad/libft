/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:24 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/04 21:52:29 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	end(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (set[i] == s1[len])
		{
			len--;
			i = 0;
		}
		i++;
	}
	return (len);
}

size_t	start(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		while (set[i] == s1[j])
		{
			j++;
			i = 0;
		}
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	end1;
	size_t	start1;

	end1 = end(s1, set);
	start1 = start(s1, set);
	ptr = ft_substr(s1, start1, end1 - start1 + 1);
	return (ptr);
}
// int main()
// {
// 	printf ("%s", ft_strtrim(" walid obbad  ", " dw"));
// }
