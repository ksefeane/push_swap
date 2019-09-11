/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnkdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:14:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/11 16:40:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static t_lnk	*ft_lnkdup(t_lnk *a)
{
	t_lnk	*b;

	b = (t_lnk *)malloc(sizeof(t_lnk));
	b->num = ft_strdup(a->num);
	b->next = a->next;
	return (b);
}

t_lnk	*ft_lnkxdup(t_lnk *a)
{
	t_lnk	*d;
	t_lnk	*h;

	d = ft_lnkdup(a);
	h = d;
	while (a)
	{
		d = d->next;
		d = ft_lnkdup(a);
		a = a->next;
	}
	return (h);
}
