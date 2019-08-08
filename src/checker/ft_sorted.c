/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:55:35 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 12:59:37 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_sorted(lnk *a, lnk *b)
{
	int		x;
	int		y;

	if (b)
	{
		ft_putendl("KO");
		return (0);
	}
	while (a->next->next)
	{
		x = ft_atoi(a->num);
		y = ft_atoi(a->next->num);
		if (x > y)
		{
			ft_putendl("KO");
			return (0);
		}
		a = a->next;
	}
	ft_putendl("OK");
	return (1);
}
