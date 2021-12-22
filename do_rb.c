/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:00:53 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:03:11 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rb(long long int **tab, t_pushy *swap)
{
	long long int	nb;
	int				x;

	x = swap->size - swap->sizeb;
	while (x + 1 != swap->size)
	{
		nb = tab[1][x];
		tab[1][x] = tab[1][x + 1];
		tab[1][x + 1] = nb;
		x++;
	}
	write(1, "rb\n", 3);
	return ;
}
