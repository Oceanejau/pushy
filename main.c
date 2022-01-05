/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:28:13 by ojauregu          #+#    #+#             */
/*   Updated: 2021/12/16 15:30:30 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>

void	showtab(int **tab, t_pushy *swap)
{
	int sizee;
        sizee = 0;
	printf("TAB =============\n");
    while (swap->size != sizee)
    {
            printf("%d |  %d \n", tab[0][sizee], tab[1][sizee]);
            sizee++;
    }
	printf("\n");
	return ;
}
int	main(int argc, char **argv)
{
	int				x;

	x = 0;
	t_pushy	swap;
	swap.size = 0;
	if (argc == 1)
		swap.ret = -1;
	swap.size = argc - 1;
	

//check_arg(argc, argv, x);

	while (x < argc)//////////////
	{
		printf("%s %d\n", argv[x], argc);
		x++;
	}/////
	int	*tab[2];

	tab[1] = NULL;
    tab[0] = (int *)malloc(sizeof(int) * (swap.size + 2));
	if (tab[0] == NULL || swap.size < 0)
 	       return (err(tab));
    tab[1] = (int *)malloc(sizeof(int) * (swap.size + 2));
	if (tab[1] == NULL)
 	       return (err(tab));
    swap.ret_fl = fill_tab(argv, &*tab, &swap); 
	swap.sizea = swap.size;
	swap.sizeb = 0;
	swap.ret_dbl = doubles(tab, swap.size);

	fat_lita(&*tab, &swap);
	swap.oka = ordr_a(tab, &swap);
	if (swap.sizea == 2 && tab[0][0] > tab[0][1])
		do_sa(&*tab, &swap);
	if (swap.sizea == 3)
		trois_a(&*tab, &swap);
	if (swap.sizeb == 3)
		trois_b(&*tab, &swap);
	if (swap.sizea == 5)
	{
		cinq(&*tab, &swap);	
	}
/*
	pour plus de 5, on parcours tout A et on localise le noyau trié, on vide a du haut et du bas de ce noyau dans B
	on tri b au fur et a mesure ( soit on injecte dans b soit on injecte dans a en calculant le nb de coups de différence pour chaque mvment
	si un mouvement sur a et b se vuit on fait un double.

*/
	else if (swap.sizea > 5 || swap.sizea == 4)
		more(&*tab, &swap);
	swap.oka = ordr_a(tab, &swap);
	swap.okb = ordr_b(tab, &swap);

	showtab(&*tab, &swap);
//	show tab
/*	int sizee;
	sizee = 0;
    while (swap.size != sizee)
    {
            printf("%lld |  %lld \n", tab[0][sizee], tab[1][sizee]);
            sizee++;
    }*/
//	show tab
	printf("fl = %d dbl = %d ret = %d\n", swap.ret_fl, swap.ret_dbl, swap.ret);
	if (swap.ret_fl == -1 || swap.ret_dbl == -1 || swap.ret == -1)
		return (err(tab));
	return (0);
}
