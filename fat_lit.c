#include "push_swap.c"

void	fat_lita(long long int **tab, t_pushy *swap)
{
	int	x;
	x = swap->size - swap->sizea;
	swap->lit_a = x;
	swap->fat_a = x;
	while (x < swap->size)
	{
		if (tab[0][x] < tab[0][swap->lit_a])
			swap->lit_a = x;
		if (tab[0][x] > tab[0][swap->fat_a])
			swap->fat_a = x;
		x++;
	}
	return;
}


void	fat_litb(long long int **tab, t_pushy *swap)
{
	int	x;
	x = swap->size - swap->sizeb;
	swap->lit_b = x; 
	swap->fat_b = x;

	while (x < swap->size)
	{
		if (tab[1][x] < tab[1][swap->lit_b])
			swap->lit_b = x;
		if (tab[1][x] > tab[1][swap->fat_b])
			swap->fat_b = x;
		x++;
	}
	return;
}
