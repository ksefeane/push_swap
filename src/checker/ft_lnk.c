/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:32:40 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 11:59:42 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

lnk		*ft_lnknew(char *s)
{
	lnk		*k;

	if (!(k = (lnk *)malloc(sizeof(lnk))))
		return (NULL);
	if (s)
	{
		if (!(k->num = (char *)malloc(sizeof(char))))
		{
			free(k);
			return (NULL);
		}
		ft_strcpy(k->num, s);
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
	lnk		*b;
	lnk		*a;

	if (!node || !s)
		return ;
	a = *node;
	b = ft_lnknew(s);
	while (a->next != NULL)
		a = a->next;
	a->next = b;
}
