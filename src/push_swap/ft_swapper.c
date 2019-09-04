/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:27:11 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 14:18:38 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_sa(lnk **node)
{
	lnk		*j;
	lnk		*k;

	j = *node;
	if (!j)
		return (0);
	k = j->next;
	j->next = k->next;
	k->next = j;
	*node = k;
	return (1);
}

static int	ft_pa(lnk **node1, lnk **node2)
{
	lnk		*a;
	lnk		*b;

	a = *node1;
	b = *node2;
	if (!b)
		return (0);
	if (a == NULL)
		a = ft_lnknew(b->num);
	else
		ft_lnkadd(&a, b->num);
	ft_lnkdel(node2);
	*node1 = a;
	return (1);
}

static int	ft_ra(lnk **node)
{
	lnk	*a;
	lnk	*b;

	a = *node;
	if (!a)
		return (0);
	b = a->next;
	*node = a->next;
	while (b->next)
		b = b->next;
	b->next = a;
	a->next = NULL;
	return (1);
}

static int	ft_rra(lnk **node)
{
	lnk	*a;
	lnk	*b;
	lnk	*c;

	a = *node;
	if (!a)
		return (0);
	c = a->next;
	b = a;
	while (c->next)
	{
		b = c;
		c = c->next;
	}
	b->next = NULL;
	*node = c;
	c->next = a;
	return (1);
}

int			ft_swapper(lnk **a, lnk **b, char *c)
{
	if (ft_strequ(c, "sa"))
		return ((ft_sa(a)) ? 1 : 0);
	else if (ft_strequ(c, "sb"))
		return ((ft_sa(b)) ? 1 : 0);
	else if (ft_strequ(c, "pa"))
		return ((ft_pa(a, b)) ? 1 : 0);
	else if (ft_strequ(c, "pb"))
		return ((ft_pa(b, a)) ? 1 : 0);
	else if (ft_strequ(c, "ra"))
		return ((ft_ra(a)) ? 1 : 0);
	else if (ft_strequ(c, "rb"))
		return ((ft_ra(b)) ? 1 : 0);
	else if (ft_strequ(c, "rra"))
		return ((ft_rra(a)) ? 1 : 0);
	else if (ft_strequ(c, "rrb"))
		return ((ft_rra(b)) ? 1 : 0);
	else if (ft_strequ(c, "ss") || ft_strequ(c, "rr") || ft_strequ(c, "rrr"))
		return (0);
	else
		ft_putendl("Error");
	return (0);
}
