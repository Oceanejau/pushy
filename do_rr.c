/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:03:19 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:05:24 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rr(long long int **tab, t_pushy *swap)
{
	long long int	nb;
	int				x;

	x = swap->size - swap->sizea;
        while (x + 1 != swap->size)
        {
                nb = tab[0][x];
                tab[0][x] = tab[0][x + 1];
                tab[0][x + 1] = nb;
                x++;
        }
	x = swap->size - swap->sizeb;
        while (x + 1 != swap->size)
        {
                nb = tab[0][x];
                tab[0][x] = tab[0][x + 1];
                tab[0][x + 1] = nb;
                x++;
        }
	write(1, "rr\n", 3);
	return ;
}
