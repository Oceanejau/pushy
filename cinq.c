#include "push_swap.h"

int	cinq(int **tab, t_pushy *swap)
{
	do_pa(&*tab, &*swap);
	do_pa(&*tab, &*swap);
	trois_a(&*tab, &*swap); 
	while (swap->sizeb > 0)
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size - swap->sizeb));
	return (0);
}
