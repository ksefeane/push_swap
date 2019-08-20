/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:08:40 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/20 16:34:59 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_two(lnk **p, char ***w)
{
	int		*a;
	char	*h;

	h = NULL;
	a = ft_holnum(*p);
	ft_perm2(a, &h);
	*w = ft_strsplit(h, ' ');
	ft_instructor(p, NULL, *w);
	return (ft_sorted_q(*p, NULL));
}

int		ft_three(lnk **p, char	***w)
{
	int		*a;
	char	*h;

	a = ft_holnum(*p);
	ft_perm3(a, &h);
	*w = ft_strsplit(h, ' ');
	ft_instructor(p, NULL, *w);
	free(a);
	free(h);
	return (ft_sorted_q(*p, NULL));
}

int		ft_four(lnk **p, lnk **q, char ***w)
{
	int		*e;
	char	*h;
	char	*cache;

	h = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		e = ft_holnum(*p);
		ft_perm4(e, &h);
		*w = ft_strsplit(h, ' ');
		cache = ft_strjoin(cache, h);
		ft_instructor(p, q, *w);
		free(h);
		free(e);
		free(*w);
	}
	*w = (ft_strlen(cache) > 0) ? ft_strsplit(cache, ' ') : NULL;
	return (ft_sorted_q(*p, *q));
}

int		ft_five(lnk **p, lnk **q, char ***w)
{
	int 	*a;
	int		*b;
	char	*cache;
	char	*h;

	a = NULL;
	b = NULL;
	h = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		ft_perm5(p, &h);
		cache = ft_strjoin(cache, h);
		*w = ft_strsplit(h, ' ');
		ft_instructor(p, q, *w);
		free(h);
		free(*w);
	}
	*w = (ft_strlen(cache) > 0) ? ft_strsplit(cache, ' ') : NULL;
	return (ft_sorted_q(*p, *q));
}
