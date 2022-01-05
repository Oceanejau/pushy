/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:52:08 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 14:54:36 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_pb(int **tab, t_pushy *swap)
{
	int	nb;

	nb = tab[0][swap->size - swap->sizea - 1];
	tab[0][swap->size - swap->sizea - 1] = tab[1][swap->size - swap->sizeb];
	tab[1][swap->size - swap->sizeb] = nb;
	write(1, "pb\n", 3);
	swap->sizea++;
	swap->sizeb--;
	return ;
}
