/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oualid <oualid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:46:05 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/04 22:54:27 by oualid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	fty_toupper(unsigned int d, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return (c -= 32);
// 	}
// 	printf ("%d \n", d);
// 	return (c);
// }
// int main()
// {
// 	char *result = ft_strmapi("walid", fty_toupper);
// 	if (result) {
// 		printf("%s\n", result); // Print the modified string
// 		free(result); // Free the allocated memory
// 	}
// 	return (0);
// }
