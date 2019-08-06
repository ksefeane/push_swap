/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:27:11 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 14:12:40 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static void	ft_sa(lnk **node)
{
	lnk		*j;
	lnk		*k;

	if (!(*node))
		return ;
	j = *node;
	k = j->next;
	j->next = k->next;
	k->next = j;
	*node = k;
}

static void	ft_pa(lnk **node1, lnk **node2)
{
	lnk		*a;
	lnk		*b;

	a = *node1;
	b = *node2;
	if (a == NULL)
		a = ft_lnknew(b->num);
	else
		ft_lnkadd(&a, b->num);
	ft_lnkdel(node2);
	*node1 = a;
}

int		ft_swapper(lnk **a, lnk **b, char *c)
{
	if (ft_strequ(c, "sa"))
		ft_sa(a);
	else if (ft_strequ(c, "sb"))
		ft_sa(b);
	else if (ft_strequ(c, "pa"))
		ft_pa(a, b);
	else if (ft_strequ(c, "pb"))
		ft_pa(b, a);
	else if (!a || !b || !c)
		return (0);
	return (1);
}
