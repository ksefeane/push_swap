/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:30:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/12 14:03:06 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_perm3(t_lnk *a, char **h)
{
	int		*n;

	n = ft_ltoai(a);
	if (n[0] > n[1])
	{
		if (n[0] > n[2])
			*h = (n[1] > n[2]) ? ft_strdup("ra\nsa\n") : ft_strdup("ra\n");
		else
			*h = ft_strdup("sa\n");
	}
	else
		*h = (n[0] > n[2]) ? ft_strdup("rra\n") : ft_strdup("rra\nsa\n");
	free(n);
	return (1);
}

int		ft_perm5(t_lnk *a, char **h)
{
	int		i;

	if (ft_lnklen(a) > 3 && !ft_sorted_q(a, NULL))
	{
		i = ft_findex(a, 1);
		if (i == 1)
			*h = ft_strdup("pb\n");
		else
			*h = (i < 4) ? ft_strdup("ra\n") : ft_strdup("rra\n");
	}
	else if (!ft_sorted_q(a, NULL))
	{
		ft_perm3(a, h);
	}
	else
		*h = ft_strdup("pa\n");
	return (1);
}

int		ft_atob(t_lnk *a, char **h, int n)
{
	int			i;
	int			j;
	int			k;
	static int	x = 0;
	static int	y = 1;

	j = (n / 5) * y;
	k = n / 5;
	if (x == k)
	{
		x = 0;
		y++;
	}
	i = ft_findrange(a, j);
	if (i == 1)
	{
		*h = ft_strdup("pb\n");
		x++;
	}
	else
		*h = ft_strdup("ra\n");
	return (1);
}

int		ft_btoa(t_lnk *b, char **h)
{
	int	i;

	i = ft_findex(b, 2);
	if (i == 1)
		*h = ft_strdup("pa\n");
	else
		*h = (i < 50) ? ft_strdup("rb\n") : ft_strdup("rrb\n");
	return (1);
}

int		ft_perm100(t_lnk *a, t_lnk *b, char **h, int n)
{
	static int	s = 0;
	static int	c = 0;

	if (c < 1)
	{
		ft_ranger(a);
		c++;
	}
	if (ft_lnklen(a) == 0)
		s = 1;
	if (s == 0)
		ft_atob(a, h, n);
	else
		ft_btoa(b, h);
	return (1);
}
