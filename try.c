/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:38:39 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:38:59 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	try(long long int **tab, t_pushy swap)
{
	while (swap->okab != 0)
	{
		swap->half = comp_half(&tab[0], t_pushy swap);
//compare les deux moitiers de la colonne A top = 1, bot = 2; 0 tout est ok 3 = truc du milieu
		if (swap->half == 1)
		{
			bouger vers le haut
		}
		if (swap->half == 2)
		{
			bouger vers le bas
		}
		if (swap->half == 3)
		{
			swap->up = swap_up();
			swap->down = swap_down();
			dépend de si b est vide ou non
		}
	}
}

/* swap.okab 
 * 1 = B nest pas vide
 * 0 = AB trie
 * -1 = erreur sur A */
