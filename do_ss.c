/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:56:01 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 14:57:13 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_ss(long long int **tab, t_pushy *swap)
{
	long long int	nb;

	if (swap->sizea > 1 && swap->sizeb > 1)
	{
		nb = tab[0][swap->size - swap->sizea + 1];
		tab[0][swap->size - swap->sizea + 1] = tab[0][swap->size - swap->sizea];
		tab[0][swap->size - swap->sizea] = nb;
		nb = tab[1][swap->size - swap->sizeb];
		tab[1][swap->size - swap->sizeb] = tab[1][swap->size - swap->sizeb + 1];
		tab[1][swap->size - swap->sizeb + 1] = nb;
		write(1, "ss\n", 3);
	}
	return ;
}
