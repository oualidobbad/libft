/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:11:33 by oobbad            #+#    #+#             */
/*   Updated: 2024/10/29 11:01:50 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	lens1;
	char	*ptr;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	ptr = malloc((lens1 + lens2) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < lens1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
