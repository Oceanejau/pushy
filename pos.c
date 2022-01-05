#include "push_swap.h"

int	pos(int **tab, t_pushy *swap, int pos)
{
        int re;

        if (pos >  1)
        {
                re = pos;
		pos--;
                while (pos--)
                        do_rra(&*tab, &*swap);
                do_pb(&*tab, &*swap);
                while (re--)
                        do_ra(&*tab, &*swap);
        }
        else if (pos < 0)
        {
                pos = pos * (-1);
		re = pos;
                while (pos--)
                        do_ra(&*tab, &*swap);
                do_pb(&*tab, &*swap);
                while (re--)
                        do_rra(&*tab, &*swap);
        }
	else if (pos == 1)
	{
		do_pb(&*tab, &*swap);
		do_ra(&*tab, &*swap);
	}
        else if (pos == 0)
                do_pb(&*tab, &*swap);
	showtab(&*tab, &*swap);
	return (0);
}
