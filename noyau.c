#include "push_swap.h"
#include <stdio.h>/////
int	noyau(int **tab, t_pushy *swap)
{
	int x;
	int pos;
	
	x = 1;
	pos = 0;
//	printf("heelloo\n");
	swap->nut_size = 0;
	swap->nut_x = -1;
	while (x < swap->size)
	{
	//	printf("x= %lld, %d\n", x, swap->sizea);
		if (tab[0][x - 1] < tab[0][x])
			pos = x - 1;
		while (tab[0][x - 1] < tab[0][x] && x <= swap->size)
			x++;
		if (x - pos + 1 > swap->nut_size/* && swap->nut_x != pos*/)
		{
		
			swap->nut_x = pos;
			swap->nut_size = x - pos;
	//	printf("passe %lld, %d, %d\n", x, swap->nut_size, pos);
		}
		if (tab[0][x - 1] > tab[0][x])
			x++;	
	//	printf("x= %lld, %d, %d, %d\n", x, swap->nut_size, pos, swap->size);
	//	x++;
	}
//position
//	swap->nut_x = ;//position
//	swap->nut_size = ;//size
	return (swap->nut_x);
}
/*

on note le noyau comme étant un groupe auquel aucun autre chiffre ne doit être ajouter entre les extrémités.
on assemble les chiffres autour ensuite par groupe? triés dans B*/
