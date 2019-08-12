
#include "../../inc/push_swap.h"

int	ft_juggler(lnk *a, char **w)
{
	int	i;
	lnk	*b;

	if (!w)
		return (0);
	i = 0;
	b = NULL;
	if (!a)
		return (0);
	while (w[i])
	{
		ft_swapper(&a, &b, w[i]);
//		ft_printer(a, b);
		i++;
	}
	return (ft_sorted_q(a, b));
}
