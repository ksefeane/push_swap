/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 14:28:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 15:24:20 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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
	if (n < 4)
		return (ft_three(&a, moves));
	return (ft_sorted(a, b));
}
