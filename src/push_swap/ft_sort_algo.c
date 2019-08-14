/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 14:28:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/14 11:18:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_two(lnk **p, char ***w)
{
	*w = ft_strsplit("sa", ' ');
	return (ft_juggler(*p, *w));
}

static	int	ft_three(lnk **p, char	***w)
{
	int	a;
	int	b;
	int	c;

	a = ft_atoi((*p)->num);
	b = ft_atoi((*p)->next->num);
	c = ft_atoi((*p)->next->next->num);
	if (a > b)
	{
		if (a > c)
		{
			*w = (b > c) ?
				ft_strsplit("ra sa", ' '):
				ft_strsplit("ra", ' ');
		}
		else
			*w = ft_strsplit("sa", ' ');
	}
	else 
		*w = (a > c) ? ft_strsplit("rra", ' ') :
			ft_strsplit("rra sa", ' ');
	return (ft_juggler(*p, *w));
}

static int	ft_four(lnk **p, lnk **q, char ***w)
{
	int	a;
	int	b;
	int	c;
	int	d;
	char	*h;
	char	*cache;
	char	**mem;

	h = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		a = ft_atoi((*p)->num);
		b = ft_atoi((*p)->next->num);
		c = ft_atoi((*p)->next->next->num);
		d = ft_atoi((*p)->next->next->next->num);
		if (a < b)
		{
			if (b < c)
			{
				h = (d < a) ?
					ft_strdup("rra ") :
					ft_strdup("rra "); ///
			}
			else
			{
				if (c > d)
				{
					h = (d < a) ?
						ft_strdup("ra ") :
						ft_strdup("ra ");
				}
				else
				{
					h = (d < a) ?
						ft_strdup("rra ") : //
						ft_strdup("rra ");
				}
			}
		}
		else
		{
			if (b > c)
			{
				if (c > d)
					h = ft_strdup("sa ");
				else
				{
					h = (d < a) ?
						ft_strdup("sa ") :
						ft_strdup("rra ");
				}
			}
			else
			{
				if (c < d)
				{
					h = (d > a) ?
						ft_strdup("sa ") : ///
						ft_strdup("ra "); ///
				}
				else
					h = (d < a) ?
						ft_strdup("sa ") :
						ft_strdup("ra ");
			}
		}
		mem = ft_strsplit(h, ' ');
		cache = ft_strjoin(cache, h);
		*w = ft_strsplit(cache, ' ');
		ft_instructor(p, q, mem);
	}
	return (ft_juggler(*p, *w));
}

int		ft_sort_algo(lnk *a, lnk *b, char ***moves)
{
	int		n;
	/*
	lnk		*x;
	lnk		*y;
	lnk		*z;

	x = a;
	y = a->next;
	z = y;
	while (z->next->next)
		z = z->next;*/
	n = ft_lnklen(a);
	if (n < 3)
		return (ft_two(&a, moves));
	else if (n < 4)
		return (ft_three(&a, moves));
	else if (n < 5)
		return (ft_four(&a, &b, moves));
	return (ft_sorted(a, b));
}
