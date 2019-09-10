/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:13:06 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/10 10:13:28 by ksefeane         ###   ########.fr       */
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

int			ft_lnkadd(t_lnk **node, char *s)
{
	t_lnk		*a;

	if (!(a = ft_lnknew(s)))
		return (0);
	a->next = *node;
	*node = a;
	return (1);
}

int			ft_lnkaddl(t_lnk **node, char *s)
{
	t_lnk		*a;

	a = *node;
	while (a->next)
		a = a->next;
	if (!(a->next = ft_lnknew(s)))
		return (0);
	return (1);
}
