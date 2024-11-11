/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:11:33 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/11 14:57:54 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cat(char *ptr, char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	lens2;
	size_t	lens1;

	lens2 = ft_strlen(s2);
	lens1 = ft_strlen(s1);
	i = 0;
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
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	char	*ptr;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = malloc((lens1 + lens2) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	cat(ptr, s1, s2);
	return (ptr);
}
// int	main(void)
//{
//	char	*s1;
//	char	*s;

//	s1 = "walid";
//	s = " obbad";
//	printf("%s", ft_strjoin(s1, s));
//}
