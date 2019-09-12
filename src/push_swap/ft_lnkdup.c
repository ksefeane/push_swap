/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnkdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:14:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/12 13:31:49 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_lnk	*ft_lnkdup(t_lnk *a)
{
	t_lnk	*b;
	t_lnk	*h;

	h = a;
	b = ft_lnknew(h->num);
	while (h->next)
	{
		h = h->next;
		ft_lnkaddl(&b, h->num);
	}
	return (b);
}
