/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnkdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:14:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/10 10:15:21 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_lnkdel(t_lnk **node)
{
	t_lnk	*a;

	a = (*node)->next;
	free((*node)->num);
	free(*node);
	*node = a;
	return (1);
}

int	ft_lnkdell(t_lnk **node)
{
	t_lnk	*a;

	a = *node;
	while (a->next->next)
		a = a->next;
	free(a->next->num);
	free(a->next);
	a->next = NULL;
	return (1);
}

int	ft_lnkcdel(t_lnk **node, unsigned int c)
{
	t_lnk			*a;
	t_lnk			*b;
	unsigned int	i;

	a = *node;
	b = a->next;
	a->next = a->next->next;
	i = 2;
	if (c == 1 || c == 0)
		return ((c == 1) ? ft_lnkdel(node) : ft_lnkdell(node));
	while (i < c)
	{
		a = a->next;
		b = b->next;
		a->next = a->next->next;
		i++;
	}
	free(b->num);
	free(b);
	return (1);
}

int	ft_lnkxdel(t_lnk **node)
{
	while (*node)
		ft_lnkdel(node);
	*node = NULL;
	return (1);
}
