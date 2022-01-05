#include "push_swap.h"
#include <stdio.h>
//#include "push_swap.h"

int	where(int **tab, t_pushy *swap, int nb)
{
	int x;
	int y;
	int ret;

	x = swap->size - swap->sizea;
	y = 0;
	ret = x;
	printf("start where\n");//
	while (x + y < swap->size)
	{
	//	printf("y = %d\n", y);//
		if (tab[0][x + y] > tab[1][nb] && ret == -1)
			ret = y;
		else if (ret != -1 &&tab[0][ret] > tab[0][y + x])
			ret = y;
		y++;
	}
	fat_lita(&*tab, &*swap);
	if (y <= swap->sizea / 2)
		ret = y * -1;
	if (y > swap->sizea / 2)
{
		ret = swap->sizea - y + 1;
	printf("ok???? %d\n", ret);
}
	if (tab[0][swap->fat_a] < tab[1][nb])
		ret = 1;
	if (tab[0][swap->lit_a] > tab[1][nb])
		ret = 0;
	printf("ret = %d, %d, y = %d, %d\n", ret, swap->fat_a, y, swap->sizea);
	return (ret);
}
/*
0 = va tout en haut de la pile;
1 = tou en bas;
positif = va à tant de distance en partant du bas
negatif = va a tant de distance en partant du haut
*/
/*int	where(long long int **tab, t_pushy *swap)
{
	int x;
	int y;
	int z;

	x = swap->size - swap->sizea;
	y = 0;
	while (x + y < swap->size)
	{
		if (tab[0][x + y] > tab[1][swap->size - swap->sizeb] && tab[0][x + y] < tab[0][x + z])
		{
			z = y;*/
			/*if (y <= swap->sizea / 2)
				return (y * -1);
			if (y > swap->sizea / 2)
				return (swap->sizea - y + 1);*/
	/*	}
		y++;
	}
	if (z <= swap->sizea / 2)
		return (z * -1);
	if (z > swap->sizea / 2)
		return (swap->sizea - z + 1);
	if (swap->fat_a < tab[1][swap->size - swap->sizeb])
		return (1);
	return (0);
}*/
/*
0 = va tout en haut de la pile;
positif = va à tant de distance en partant du bas
negatif = va a tant de distance en partant du haut
*/
