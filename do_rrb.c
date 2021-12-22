/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:19:04 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:20:19 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rrb(long long int **tab, t_pushy *swap)
{
	long long int	nb;
	int				x;

	x = swap->size - 1;
	while (x != swap->size - swap->sizeb)
	{
		nb = tab[1][x - 1];
		tab[1][x - 1] = tab[1][x];
		tab[1][x] = nb;
		x--;
	}
	write(1, "rrb\n", 4);
	return ;
}
