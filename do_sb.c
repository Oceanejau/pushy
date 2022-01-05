/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:53:03 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 14:54:11 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sb(int **tab, t_pushy *swap)
{
	int	nb;

	if (swap->sizeb > 1)
	{
		nb = tab[1][swap->size - swap->sizeb];
		tab[1][swap->size - swap->sizeb] = tab[1][swap->size - swap->sizeb + 1];
		tab[1][swap->size - swap->sizeb + 1] = nb;
		write(1, "sb\n", 3);
	}
	return ;
}
