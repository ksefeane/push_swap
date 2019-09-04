/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:32:40 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:21:16 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_lnk		*ft_lnknew(char *s)
{
	t_lnk		*k;

	k = NULL;
	if (!(k = (t_lnk *)malloc(sizeof(t_lnk))))
		return (NULL);
	if (s)
		k->num = ft_strdup(s);
	else
		k->num = NULL;
	k->next = NULL;
	return (k);
}

void		ft_lnkadd(t_lnk **node, char *s)
{
	t_lnk		*a;

	if (!node || !s)
		return ;
	a = ft_lnknew(s);
	a->next = *node;
	*node = a;
}

void		ft_lnkaddl(t_lnk **node, char *s)
{
	t_lnk		*a;
	t_lnk		*b;

	if (!node || !s)
		return ;
	a = *node;
	if (!(b = ft_lnknew(s)))
		return ;
	while (a->next)
		a = a->next;
	a->next = b;
}

void		ft_lnkdel(t_lnk **node)
{
	t_lnk		*a;
	t_lnk		*b;

	a = *node;
	b = (*node)->next;
	free(a->num);
	a->next = NULL;
	free(a);
	a = NULL;
	*node = b;
}

void		ft_lnkxdel(t_lnk **node)
{
	t_lnk		*a;
	t_lnk		*b;

	a = *node;
	if (!a)
		return ;
	while (a)
	{
		b = a->next;
		free(a->num);
		free(a);
		a = b;
	}
	*node = NULL;
}
