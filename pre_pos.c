#include "push_swap.h"
#include <stdio.h>

int	pre_pos(int **tab, t_pushy *swap)
{
	int	pos_pre;
	int	pos_dex;
	int	pos_der;

	pos_pre = where(&*tab, &*swap, swap->size - swap->sizeb);//premier chiffre de B
        pos_dex = 1 + where(&*tab, &*swap, swap->size - (swap->sizeb - 1));//deuxieme chiffre de B
        pos_der = 1 + where(&*tab, &*swap, swap->size);//dernier chiffre de B
	printf("88888888 %d %d %d\n", pos_pre, pos_dex, pos_der);//
	if (pos_pre < 0)
		pos_pre = pos_pre * -1;
	if (pos_dex < 0)
		pos_dex = pos_dex * -1;
	if (pos_der < 0)
		pos_der = pos_der * -1;
	if (pos_pre < pos_dex && pos_pre < pos_der)
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size - swap->sizeb));
	if (pos_dex < pos_pre && pos_dex < pos_der)
		pos(&*tab, &*swap, swap->size - (swap->sizeb - 1));
	if (pos_der < pos_pre && pos_der < pos_dex)
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size));
	if (pos_der == pos_pre || pos_der == pos_dex)
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size));
	if (pos_pre == pos_dex)
		pos(&*tab, &*swap, where(&*tab, &*swap, swap->size - swap->sizeb));
	return (0);
}
