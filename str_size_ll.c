/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_size_ll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:20:52 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:22:32 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	str_size_ll(char *str, int size, int neg, int *nba)
{
	long long int	nb;

	nb = 0;
	if (str[size] <= '0' && str[size] >= '9')
		return (-1);
	while (str[size] != '\0' && (str[size] >= '0' && str[size] <= '9'))
	{
		nb = (nb * 10) + (str[size] - 48);
		size++;
		if ((nb * neg) > 2147483647 || (nb * neg) < -2147483648)
			return (-1);

	}
	*nba = nb * neg;
	if ((nb * neg) > 2147483647 || (nb * neg) < -2147483648)
		size = -1;
	return (size);
}
