
#include "../../inc/push_swap.h"

int		ft_sorted_q(lnk *a, lnk *b)
{
	int	x;
	int	y;

	if (b)
		return (0);
	while (a->next->next)
	{
		x = ft_atoi(a->num);
		y = ft_atoi(a->next->num);
		if (x > y)
			return (0);
		a = a->next;
	}
	return (1);
}
