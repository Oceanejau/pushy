#include "push_swap.h"
#include <stdio.h>/////
int	noyau(long long int **tab, t_pushy *swap)
{
	long long int x;
	int pos;
	
	x = 0;
	pos = 0;
//	printf("heelloo\n");
	swap->nut_size = 0;
	swap->nut_x = -1;
	while (x < swap->sizea)
	{
	//	printf("x= %lld, %d\n", x, swap->sizea);
		if (tab[0][x] < tab[0][x + 1])
			pos = x;
		while (tab[0][x] < tab[0][x + 1] && x < swap->sizea)
			x++;
		if (x - pos > swap->nut_size && swap->nut_x != pos)
		{
			swap->nut_x = pos;
			swap->nut_size = x - pos;
		}
		
	//	printf("x= %lld, %d, %d\n", x, swap->nut_size, pos);
		x++;
	}
//position
//	swap->nut_x = ;//position
//	swap->nut_size = ;//size
	return (swap->nut_x);
}
/*

on note le noyau comme étant un groupe auquel aucun autre chiffre ne doit être ajouter entre les extrémités.
on assemble les chiffres autour ensuite par groupe? triés dans B*/
