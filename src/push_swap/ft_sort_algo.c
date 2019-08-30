/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:20:01 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/30 10:33:41 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_three(lnk **a, char **moves)
{
	char	*h;
	lnk		*b;

	h = NULL;
	b = NULL;
	ft_perm3(*a, &h);
	ft_instructor(a, &b, h);
	*moves = ft_strdup(h);
	free(h);
	return (ft_sorted_q(*a, NULL));
}

int		ft_five(lnk **a, lnk **b, char **moves)
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
		ft_perm5(*a, &h);
		cache = ft_strjoin(cache, h);
		ft_instructor(a, b, h);
		free(f);
		free(h);
	}
	*moves = ft_strdup(cache);
	free(cache);
	return (1);
}
