/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnkdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:14:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/11 16:50:35 by ksefeane         ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	n;
	t_lnk			*a;
	t_lnk			*b;

	i = 1;
	n = ft_lnklen(*node);
	if (c == 1 || c == 0 || n == 1)
		return ((c == 1) ? ft_lnkdel(node) : ft_lnkdell(node));
	a = *node;
	b = a;
	while (i < n)
	{
		i++;
		b = b->next;
		if (i == c)
		{
			a->next = b->next;
			free(b->num);
			free(b);
			return (1);
		}
		a = a->next;
	}
	return (0);
}

int	ft_lnkxdel(t_lnk **node)
{
	while (*node)
		ft_lnkdel(node);
	*node = NULL;
	return (1);
}
