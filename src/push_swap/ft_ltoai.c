/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoai.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:25:04 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:06:34 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		*ft_ltoai(t_lnk *a)
{
	int		*d;
	int		n;

	if (!a)
		return (NULL);
	n = ft_lnklen(a);
	d = (int *)malloc(sizeof(int) * n);
	n = 0;
	while (a)
	{
		d[n++] = ft_atoi(a->num);
		a = a->next;
	}
	return (d);
}
