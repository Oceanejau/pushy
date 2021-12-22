#include "push_swap.h"

int	noyau(long long int *tab, t_pushy swap)
{
	int x;
	
	x = 0;
	while (x < swap->sizea)
	{
		if (tab[0][x] < tab[0][x + 1])
			swap->pos2 = x;
		while (tab[0][x] < tab[0][x + 1])
			x++;
		if (x - swap->pos2 > swap ->ns)
		{
			swap->pos1 = swap->pos2;
			swap->ns = x - swap->pos2;
		}
	}
	swap->pos1 = ;//position
	swap->pos2 = ;//position
	swap->ns = ;//size
	return;
}


on note le noyau comme étant un groupe auquel aucun autre chiffre ne doit être ajouter entre les extrémités.
on assemble les chiffres autour ensuite par groupe? triés dans B
