/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:25:31 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:26:13 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	err(int **tab)
{
	write(2, "Error\n", 6);
	free(tab[0]);
	free(tab[1]);
	return (-1);
}
