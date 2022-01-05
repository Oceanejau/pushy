/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubles.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:23:01 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:25:10 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	doubles(int **tab, int size)
{
	int	x;
	int	y;
	int	z;

	y = 0;
	while (y < size)
	{
		z = 0;
		x = 0;
		while (x < size)
		{
			if (tab[0][y] == tab[0][x])
				z++;
			if (z >= 2)
				return (-1);
			x++;
		}
		y++;
	}
	return (0);
}
