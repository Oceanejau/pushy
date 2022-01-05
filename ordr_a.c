/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordr_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:32:48 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:34:00 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ordr_a(int **tab, t_pushy *swap)
{
	int	x;
	x = -1;
	swap->top = -1;
	swap->bot = -1;
	while (x++ < swap->sizea / 2 - 1)
	{
		if (tab[0][x] > tab[0][x + 1])
		{
			swap->top = x;
			x = swap->sizea / 2;
		}
	}
	while (x++ < swap->sizea - 2)
	{
		if (tab[0][x] > tab[0][x + 1])
		{
			swap->bot = x;
			x = swap->size - 1;
		}
	}
	if (swap->bot > -1 && (swap->sizea - 1 - swap->bot) < swap->top)
		return (2);
	if (swap->top != -1)
		return (1);
	return (0);
}
