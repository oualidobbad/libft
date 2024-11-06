/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:08:10 by oobbad            #+#    #+#             */
/*   Updated: 2024/11/02 21:08:11 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef unsigned long long size_t;
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
