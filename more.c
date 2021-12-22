#include "push_swap.h"

int	more(long long int **tab, t_pushy *swap)
{
	while (swap->sizea > 3)
		do_pa(&*tab, &*swap);
        trois_a(&*tab, &*swap);
        while (swap->sizeb > 0)
                pos(&*tab, &*swap);
	return (0);
}

/*
	commencer par while on garde le noyau sur A
	le reste passe sur b
	ensuite appliquer pos
*/
