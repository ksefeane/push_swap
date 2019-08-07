/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 10:55:35 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 11:02:18 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_sorted(lnk *a, lnk *b)
{
	lnk		*k;
	int		x;
	int		y;

	k = a;
	if (b != NULL)
		return (0);
	while (k->next->next)
	{
		x = ft_atoi(k->num);
		y = ft_atoi(k->next->num);
		if (x >= y)
		{
			ft_putendl("KO");
			return (0);
		}
		k = k->next;
	}
	ft_putendl("OK");
	return (1);
}
