#include "push_swap.h"

int	trois_a(long long int **tab, t_pushy *swap)
{
	fat_lita(&*tab, &*swap);
	if (swap->fat_a == swap->size - 1 && swap->lit_a == swap->size - (swap->sizea - 1))
		do_sa(&*tab, &*swap);
	else if (swap->lit_a == swap->size - (swap->sizea - 1) && swap->fat_a == swap->size - swap->sizea)
		do_ra(&*tab, &*swap);
	else if (swap->lit_a == swap->size - 1 && swap->fat_a == swap->size - (swap->sizea - 1))
		do_rra(&*tab, &*swap);
	else if (swap->fat_a == swap->size - swap->sizea && swap->lit_a == swap->size - 1)
	{
		do_sa(&*tab, &*swap);
		do_rra(&*tab, &*swap);
	}
	else if (swap->lit_a == swap->size - swap->sizea && swap->fat_a == swap->size - (swap->sizea - 1))
	{
		do_sa(&*tab, &*swap);
		do_ra(&*tab, &*swap);
	}
	return (0);
}

//swap->size - 1 == dernier chiffre
//swap->size - swap->sizeb == prermier chiffre
//swap->size - (swap->sizea - 1) deuxieme chiffre

int	trois_b(long long int **tab, t_pushy *swap)
{
	fat_litb(&*tab, &*swap);
	if (swap->fat_b == swap->size - 1 && swap->lit_b == swap->size - (swap->sizeb - 1))
		do_rrb(&*tab, &*swap);//213
	else if (swap->lit_b == swap->size - (swap->sizeb - 1) && swap->fat_b == swap->size - swap->sizeb)
{
		do_sb(&*tab, &*swap);
		do_rb(&*tab, &*swap);//312
}	
	else if (swap->lit_b == swap->size - 1 && swap->fat_b == swap->size - (swap->sizeb - 1))
		do_sb(&*tab, &*swap);//231
	else if (swap->lit_b == swap->size - swap->sizeb && swap->fat_b == swap->size - 1)
	{
		do_sb(&*tab, &*swap);//123
		do_rrb(&*tab, &*swap);
	}
	else if (swap->lit_b == swap->size - swap->sizeb && swap->fat_b == swap->size - (swap->sizeb - 1))
		do_rb(&*tab, &*swap);//132
	return (0);
}
