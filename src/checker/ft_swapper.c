/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:27:11 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 13:43:06 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static void	ft_sa(lnk **node)
{
	lnk		*j;
	lnk		*k;

	j = *node;
	k = j->next;
	j->next = k->next;
	k->next = j;
	*node = k;
}

int		ft_swapper(lnk **a, lnk **b, char *c)
{
	if (ft_strequ(c, "sa"))
		ft_sa(a);
	else if (!a || !b || !c)
		return (0);
	return (1);
}
