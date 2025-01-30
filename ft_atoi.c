/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oobbad <oobbad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:24:30 by oobbad            #+#    #+#             */
/*   Updated: 2025/01/13 09:15:38 by oobbad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long ft_atoi(char *nb, int *flag)
{
	long n;
	int i;
	long sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((nb[i] >=9 && nb[i] <= 13) || nb[i] == 32)
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign = -sign;
		i++;
	}
	while (nb[i]>= '0' && nb[i] <= '9')
	{
		n = n * 10 + (nb[i] - 48);
		i++;
	}
	if (!(nb[i]>= '0' && nb[i] <= '9') && nb[i])
		*flag = 0;
	return n * sign;
}
