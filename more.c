#include "push_swap.h"
#include <stdio.h> ///////
int	more(long long int **tab, t_pushy *swap)
{
	int nut;
//	int	x;

//	x = 0;
	nut = noyau(&*tab, &*swap);
//	printf("nut = %d, %d , %d\n", nut, swap->nut_size, swap->nut_x);
	if (nut <= 3)
	{
		while (swap->sizea > 3)
			do_pa(&*tab, &*swap);
		trois_a(&*tab, &*swap);
	}
/*	if (nut >= 3)
	{*/
	/*	while (nut-- > 0)
			do_pa(&*tab, &*swap);
		if ((swap->size - (swap->nut_x + swap->nut_size)) * 2 < swap->nut_x + swap->nut_size)
		{
			while (swap->nut_x + swap->nut_size + nut++ < swap->size)
			{
				do_rra(&*tab, &*swap);
				if (tab[0][swap->size - swap->sizea] > tab[0][swap->size - (swap->sizea - 1)])
					do_pa(&*tab, &*swap);
			}
		}
		else
		{
			nut = swap->nut_size;
			while (nut--)
				do_ra(&*tab, &*swap);
			while (swap->sizea > swap->nut_size)
				do_pa(&*tab, &*swap);
		}*/
//}
/*	else
	{
		while (swap->sizea > 3)
			do_pa(&*tab, &*swap);
	}*/
//        if (swap->sizea == 3)
//		trois_a(&*tab, &*swap);
        while (swap->sizeb > 0)
                pos(&*tab, &*swap);
	return (0);
}

/*
	commencer par while on garde le noyau sur A
	le reste passe sur b
	ensuite appliquer pos
*/
