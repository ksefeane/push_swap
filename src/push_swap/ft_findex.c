/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:13:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/11 16:54:42 by ksefeane         ###   ########.fr       */
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

int			ft_findex(t_lnk *a, int c)
{
	t_lnk	*x;
	int		i;
	int		j;
	int		n;
	int		m;

	if (!a)
		return (0);
	if (ft_lnklen(a) == 0)
	{
		ft_putendl("done");
	}
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

int			ft_findfit(t_lnk *a, int c)
{
	t_lnk	*x;
	int		i;
	int		e;
	int		f;

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

int			ft_findrange(t_lnk *a, int c)
{
	int		i;
	int		x;

	i = 1;
	while (a && i < c)
	{
		x = ft_atoi(a->num);
		if (x <= c)
			return (i);
		a = a->next;
		i++;
	}
	return (0);
}

int		ft_ranger(t_lnk *a)
{
	int		i;
	int		c;
	int		n;
	t_lnk	*d;

	i = 0;
	c = 1;
	d = ft_lnkxdup(a);
	n = ft_lnklen(d);
	while (d)
	{
		i = ft_findex(d, 1);
		ft_putnbr(c++); ft_putstr(" "); t(i);
		n = ft_lnklen(d);
		ft_lnkcdel(&d, i);
	}
	return (1);
}
