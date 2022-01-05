/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:26:26 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:27:58 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>//////////
int	fill_tab(char **AB, int **tab, t_pushy *swap)
{
	int	ret;
	int	nb;

	nb = 0;
	while (nb + 1 <= swap->size)
	{
	printf("entre\n");
		ret = check_arg(&*AB, nb + 1);
		if (ret == -1)
			return (ret);
printf("sort\n");
		tab[1][nb] = ft_atoi(AB[nb]);
printf("ici %d\n", tab[1][nb]);
		nb++;
	}
	swap->sizea = swap->size;
	swap->sizeb = 0;
printf("fin filltab\n");
	return (ret);
}
