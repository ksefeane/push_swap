/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_q.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 14:43:21 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/29 15:23:42 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_sorted_q(lnk *a, lnk *b)
{
	int	x;
	int	y;

	if (b)
		return (0);
	while (a->next)
	{
		x = ft_atoi(a->num);
		y = ft_atoi(a->next->num);
		if (x > y)
			return (0);
		a = a->next;
	}
	return (1);
}

int		ft_sorted(lnk *a, lnk *b)
{
	if (ft_sorted_q(a, b))
	{
		ft_putendl("OK");
		return (1);
	}
	else
	{
		ft_putendl("KO");
		return (0);
	}
}
