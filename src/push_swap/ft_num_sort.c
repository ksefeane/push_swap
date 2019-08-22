/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:08:40 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/22 12:08:49 by ksefeane         ###   ########.fr       */
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

int		ft_three(lnk **p, char ***w)
{
	int		*a;
	char	*h;
	lnk		*b;

	b = NULL;
	a = ft_holnum(*p);
	ft_perm3(a, &h);
	*w = ft_strsplit(h, ' ');
	ft_instructor(p, &b, *w);
	free(a);
	free(h);
	return (ft_sorted_q(*p, NULL));
}

int		ft_four(lnk **p, lnk **q, char ***w)
{
	int		*e;
	char	*h;
	char	*cache;
	char	*f;

	h = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		f = cache;
		e = ft_holnum(*p);
		ft_perm4(e, &h);
		*w = ft_strsplit(h, ' ');
		cache = ft_strjoin(cache, h);
		ft_instructor(p, q, *w);
		free(h);
		free(e);
		free(*w);
		free(f);
	}
	*w = (ft_strlen(cache) > 0) ? ft_strsplit(cache, ' ') : NULL;
	free(cache);
	return (1);
}

int		ft_five(lnk **p, lnk **q, char ***w)
{
	char	*cache;
	char	*h;
	char	*f;

	h = NULL;
	f = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		f = cache;
		ft_perm5(*p, &h);
		cache = ft_strjoin(cache, h);
		*w = ft_strsplit(h, ' ');
		ft_instructor(p, q, *w);
		free(h);
		free(f);
		free(*w);
	}
	*w = (ft_strlen(cache) > 0) ? ft_strsplit(cache, ' ') : NULL;
	free(cache);
	return (1);
}

int		ft_hundred(lnk **p, lnk **q, char ***w)
{
	char 	*cache;
	char 	*h;
	char	*f;

	h = NULL;
	f = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*p, *q))
	{
		f = cache;
		ft_perm100(*p, *q, &h);
		cache = ft_strjoin(cache, h);
		*w = ft_strsplit(h, ' ');
		ft_instructor(p, q, *w);
		ft_printer(*p, *q);
		ft_putendl(h);
		free(h);
		free(f);
		free(*w);
	}
	*w = (ft_strlen(cache) > 0) ? ft_strsplit(cache, ' ') : NULL;
	free(cache);
	return (1);
}
