#include "push_swap.h"

int	ft_atoi(const char *str)
{
	unsigned int	x;
	int				neg;
	unsigned int	s;

	x = 0;
	s = 0;
	neg = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x = x + 1;
	if (str[x] == 45 || str[x] == 43)
	{
		if (str[x] == 45)
			neg = -1;
		x = x + 1;
	}
	if (str[x] >= 48 && str[x] <= 57)
	{
		while (str[x] >= 48 && str[x] <= 57)
		{
			s = ((s * 10) + (str[x] - 48));
			x = x + 1;
		}
		x = x + 1;
	}
	return (s = s * neg);
}
