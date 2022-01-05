/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:57:45 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:00:41 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_ra(int **tab, t_pushy *swap)
{
	int	nb;
	int				x;

	x = swap->size - swap->sizea;
	while (x + 1 != swap->size)
	{
		nb = tab[0][x];
		tab[0][x] = tab[0][x + 1];
		tab[0][x + 1] = nb;
		x++;
	}
	write(1, "ra\n", 3);
	return ;
}
