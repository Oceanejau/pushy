#include "push_swap.h"
#include <stdio.h> ///////
int	more(int **tab, t_pushy *swap)
{
	int nut;
	int	x;

	x = swap->size - swap->sizea;
	nut = noyau(&*tab, &*swap);
	printf("nut = %d, %d , %d\n", nut, swap->nut_size, swap->nut_x);
	if (swap->nut_size <= 3)
	{
		while (swap->sizea > 3)
			do_pa(&*tab, &*swap);
		trois_a(&*tab, &*swap);
	}
	else if (swap->nut_size > 3)
	{
		while (x++ < swap->nut_x)
			do_pa(&*tab, &*swap);
		x = x + swap->nut_size - 1;
	}
	printf("passe ici \n");	
        while (swap->sizeb > 0 && swap->sizeb >= 3)
                pre_pos(&*tab, &*swap);
	while (swap->sizeb > 0)
{
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size - swap->sizeb));
printf("go\n");
}
	return (0);
}

/*
	commencer par while on garde le noyau sur A
	le reste passe sur b
	ensuite appliquer pos
*/
