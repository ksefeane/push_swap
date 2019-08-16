/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 14:28:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/15 12:35:36 by ksefeane         ###   ########.fr       */
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
			*w = (b > c) ? ft_strsplit("ra sa", ' '): ft_strsplit("ra", ' ');
		else
			*w = ft_strsplit("sa", ' ');
	}
	else 
		*w = (a > c) ? ft_strsplit("rra", ' ') : ft_strsplit("rra sa", ' ');
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
		ft_permcmp(a, b, c, d, &h);
		mem = ft_strsplit(h, ' ');
		cache = ft_strjoin(cache, h);
		ft_instructor(p, q, mem);
		free(h);
		free(mem);
	}
	*w = (ft_strlen(cache) > 0) ?
		ft_strsplit(cache, ' ') : NULL;
	return (ft_sorted_q(*p, *q));
}

int		ft_sort_algo(lnk *a, lnk *b, char ***moves)
{
	int		n;
	
	n = ft_lnklen(a);
	if (n < 3)
		return (ft_two(&a, moves));
	else if (n < 4)
		return (ft_three(&a, moves));
	else if (n < 5)
		return (ft_four(&a, &b, moves));
	return (ft_sorted(a, b));
}
