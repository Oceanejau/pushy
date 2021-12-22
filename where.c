#include "push_swap.h"

int	where(long long int **tab, t_pushy *swap)
{
	int x;
	int y;

	x = swap->size - swap->sizea;
	y = 0;
	while (x + y < swap->size)
	{
		if (tab[0][x + y] > tab[1][swap->size - swap->sizeb])
		{
			if (y <= swap->sizea / 2)
				return (y * -1);
			if (y > swap->sizea / 2)
				return (swap->sizea - y + 1);
		}
		y++;
	}
	if (swap->fat_a < tab[1][swap->size - swap->sizeb])
		return (1);
	return (0);
}
/*
0 = va tout en haut de la pile;
positif = va à tant de distance en partant du bas
negatif = va a tant de distance en partant du haut
*/
