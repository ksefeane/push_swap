
#include "../../inc/push_swap.h"

int	ft_lnklen(lnk *a)
{
	int	n;
	lnk	*x;

	if (!a)
		return (0);
	n = 1;
	x = a;
	while (x->next)
	{
		x = x->next;
		n++;
	}
	return (n);
}
