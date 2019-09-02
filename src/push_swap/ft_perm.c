/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:30:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/02 14:05:18 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_perm3(lnk *a, char **h)
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

int		ft_perm5(lnk *a, char **h)
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

int		ft_perm100(lnk *a, lnk *b, char **h)
{
	int		n;
	int		i;
	int		j;
	int		k;
	int		x;

	if (!ft_sorted_q(a, b))
	{
		x = ft_atoi(a->num);
		i = ft_findex(a, 1);
		j = ft_findex(b, 2);
		k = ft_findfit(b, x);
		if ((n = ft_lnklen(a) > 
	}
	else
		*h = ft_strdup("pa\n");
	return (1);
}
