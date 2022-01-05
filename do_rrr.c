/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:06:58 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:08:51 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rrr(int **tab, t_pushy *swap)
{
	int	nb;
	int				x;

	x = swap->size - 1;
        while (x != swap->size - swap->sizea)
        {
                nb = tab[0][x - 1];
                tab[0][x - 1] = tab[0][x];
                tab[0][x] = nb;
                x--;
        }
	x = swap->size - 1;
        while (x != swap->size - swap->sizeb)
        {
                nb = tab[1][x - 1];
                tab[1][x - 1] = tab[1][x];
                tab[1][x] = nb;
                x--;
        }
	write(1, "rrr\n", 4);
	return ;
}
