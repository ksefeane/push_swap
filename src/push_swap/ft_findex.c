/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:13:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/02 12:59:31 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_cmp(int *x, int *y, int i, int c)
{
	if (c == 1)
	{
		if (*x > *y)
		{
			*x = *y;
			return (i);
		}
	}
	else if (c == 2)
	{
		if (*x < *y)
		{
			*x = *y;
			return (i);
		}
	}
	return (0);
}

int			ft_findex(lnk *a, int c)
{
	lnk		*x;
	int		i;
	int		j;
	int		n;
	int		m;

	if (!a)
		return (0);
	x = a;
	i = 1;
	j = 1;
	n = ft_atoi(x->num);
	while (x->next)
	{
		x = x->next;
		m = ft_atoi(x->num);
		i++;
		if (ft_cmp(&n, &m, i, c))
			j = i;
	}
	return (j);
}

int		ft_findfit(lnk *a, int c)
{
	lnk		*x;
	int		i;
	int		e;
	int		f;

	if (!a)
		return (0);
	i = 1;
	x = a;
	while (x->next)
		x = x->next;
	e = ft_atoi(x->num);
	f = ft_atoi(a->num);
	if (c > e && c < f)
		return (i);
	x = a;
	while (x->next)
	{
		i++;
		e = ft_atoi(x->num);
		f = ft_atoi(x->next->num);
		if (c > e && c < f)
			return (i);
		x = x->next;

	}
	return (0);
}
