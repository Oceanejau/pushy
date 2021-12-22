/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordr_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:34:10 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:37:50 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ordr_ab(long long int **tab, t_pushy *swap)
{
	int	x;

	x = 0;
	while (x < swap->sizea)
	{
		if (tab[0][x] > tab[0][x + 1])
			return (-1);
		x++;
	}
	if (swap->sizeb != 0)
		return (1);
	return (0);
}
