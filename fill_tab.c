/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:26:26 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:27:58 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	fill_tab(char *AB, long long int**tab)
{
	int	size;
	int	neg;
	int	nb;

	size = 0;
	nb = 0;
	while (AB[size] != '\0' && size != -1)
	{
		neg = 1;
		if (AB[size] == '-' || AB[size] == '+')
		{
			if (AB[size] == '-')
				neg = neg * -1;
			size++;
		}
		size = str_size_ll(AB, size, neg, &tab[0][nb]);
		tab[1][nb] = 0;
		nb++;
		if (AB[size] != ' ' && AB[size] != '\0')
			size = -1;
		if (AB[size] == ' ')
			size++;
	}
	return (size);
}
