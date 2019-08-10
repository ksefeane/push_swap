/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:32:40 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 14:06:19 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

lnk		*ft_lnknew(char *s)
{
	lnk		*k;

	k = NULL;
	if (!(k = (lnk *)malloc(sizeof(lnk))))
		return (NULL);
	if (s)
	{

		k->num = ft_strdup(s);
	}
	else
		k->num = NULL;
	k->next = NULL;
	return (k);
}

void	ft_lnkadd(lnk **node, char *s)
{
	lnk		*a;

	if (!node || !s)
		return ;
	a = ft_lnknew(s);
	a->next = *node;
	*node = a;
}

void	ft_lnkaddl(lnk **node, char *s)
{
	lnk		*a;
	lnk		*b;

	if (!node || !s)
		return ;
	a = *node;
	if (!(b = ft_lnknew(s)))
		return ;
	while (a->next)
		a = a->next;
	a->next = b;
}

void	ft_lnkdel(lnk **node)
{
	lnk		*a;
	lnk		*b;

	a = *node;
	b = (*node)->next;;
	free(a->num);
	a->next = NULL;
	free(a);
	a = NULL;
	*node = b;
}

void	ft_lnkdell(lnk **node)
{
	lnk		*a;
	lnk		*b;
	
	a = *node;
	b = *node;
	while (a->next != NULL)
		a = a->next;
	while (b->next->next != NULL)
		b = b->next;
	free(a->num);
	free(a);
	a = NULL;
	b->next = NULL;
}

void	ft_lnkxdel(lnk **node)
{
	lnk		*a;
	lnk		*b;

	a = *node;
	b = a;
	if (!a)
		return ;
	while (a)
	{
		b = b->next;
		a->next = NULL;
		free(a->num);
		free(a);
		a = b;
	}
	*node = a;
}
