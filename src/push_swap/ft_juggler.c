
#include "../../inc/push_swap.h"

int		ft_juggler(lnk *a, char **w)
{
	int	i;
	lnk	*b;

	i = 0;
	b = NULL;
	if (!w)
		return (0);
	if (ft_sorted_q(a, b))
		return (1);
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
