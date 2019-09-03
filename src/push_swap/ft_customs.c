
#include "../../inc/push_swap.h"

int		ft_checkdigit(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_maxint(char *s)
{
	if (ft_strequ(s, "0") || ft_strequ(s, "-1"))
		return (1);
	else
		return ((ft_atoi(s) == -1) ? 0 : 1);
}

int		ft_customs(char **s, int c)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	j = 0;
	temp = s;
	if (c == 1)
	{
		s = ft_strsplit(s[0], ' ');
		ft_strxdel(&temp);
	}
	while (s[i])
	{
		while (s[j])
		{
			if (i == j)
				j++;
			if (ft_strequ(s[i], s[j]))
				return (0);
			j++;
		}
		if (!ft_checkdigit(s[i]) || !ft_maxint(s[i]))
			return (0);
		j = 0;
		i++;
	}
	return (1);
}
