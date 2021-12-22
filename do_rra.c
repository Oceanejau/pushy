/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:17:23 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:18:55 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rra(long long int **tab, t_pushy *swap)
{
	long long int	nb;
	int				x;

	x = swap->size - 1;
	while (x != swap->size - swap->sizea)
	{
		nb = tab[0][x - 1];
		tab[0][x - 1] = tab[0][x];
		tab[0][x] = nb;
		x--;
	}
	write(1, "rra\n", 4);
	return ;
}
