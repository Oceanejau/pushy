/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:50:33 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 14:51:59 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pa(long long int **tab, t_pushy *swap)
{
	long long int	nb;

	nb = tab[1][swap->size - swap->sizeb - 1];
	tab[1][swap->size - swap->sizeb - 1] = tab[0][swap->size - swap->sizea];
	tab[0][swap->size - swap->sizea] = nb;
	write(1, "pa\n", 3);
	swap->sizea--;
	swap->sizeb++;
	return ;
}
