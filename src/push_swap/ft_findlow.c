/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findlow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:56:22 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/22 12:13:44 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_findlow(lnk *a)
{
	lnk		*x;
	int		i;
	int		j;
	int		n;

	if (!a)
		return (0);
	x = a;
	i = 1;
	j = 1;
	n = ft_atoi(x->num);
	while (x->next)
	{
		x = x->next;
		i++;
		if (n > ft_atoi(x->num))
		{
			n = ft_atoi(x->num);
			j = i;
		}
	}
	return (j);
}
