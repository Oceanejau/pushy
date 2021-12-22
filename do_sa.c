/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:54:59 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 14:55:52 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_sa(long long int **tab, t_pushy *swap)
{
	long long int	nb;

	if (swap->sizea > 1)
	{
		nb = tab[0][swap->size - swap->sizea + 1];
		tab[0][swap->size - swap->sizea + 1] = tab[0][swap->size - swap->sizea];
		tab[0][swap->size - swap->sizea] = nb;
		write(1, "sa\n", 3);
	}
	return ;
}
