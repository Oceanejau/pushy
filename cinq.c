#include "push_swap.h"

int	cinq(long long int **tab, t_pushy *swap)
{
	do_pa(&*tab, &*swap);
	do_pa(&*tab, &*swap);
	trois_a(&*tab, &*swap); 
	while (swap->sizeb > 0)
		pos(&*tab, &*swap);
	return (0);
}
