/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:20:01 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/10 10:12:52 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_three(t_lnk **a, char **moves)
{
	char	*h;
	t_lnk	*b;

	h = NULL;
	b = NULL;
	ft_perm3(*a, &h);
	ft_instructor(a, &b, h);
	*moves = ft_strdup(h);
	free(h);
	return (ft_sorted_q(*a, NULL));
}

int		ft_five(t_lnk **a, t_lnk **b, char **moves)
{
	char	*h;
	char	*f;
	char	*cache;
	int		i;

	i = 0;
	h = NULL;
	f = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*a, *b))
	{
		f = cache;
		ft_perm5(*a, &h);
		ft_instructor(a, b, h);
		cache = ft_strjoin(cache, h);
		free(f);
		free(h);
		i++;
	}
	*moves = ft_strdup(cache);
	free(cache);
	return (1);
}

int		ft_hunnid(t_lnk **a, t_lnk **b, char **moves)
{
	char	*h;
	char	*f;
	char	*cache;

	h = NULL;
	f = NULL;
	cache = ft_strnew(0);
	while (!ft_sorted_q(*a, *b))
	{
		f = cache;
		ft_perm100(*a, *b, &h);
		ft_instructor(a, b, h);
		cache = ft_strjoin(cache, h);
		free(f);
		free(h);
	}
	*moves = ft_strdup(cache);
	free(cache);
	return (1);
}
