
#include "../../inc/checker.h"

int	ft_instructor(lnk *a, lnk *b, char **moves)
{
	int	i;

	i = 0;
	while (moves[i])
	{
		ft_swapper(&a, &b, moves[i]);
		ft_printer(a, b, moves[i]);
		i++;
	}
	return (1);
}
