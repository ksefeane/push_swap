/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_juggler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:00:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/21 13:00:51 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_juggler(lnk *a, char **w)
{
	int	i;
	lnk	*b;

	i = 0;
	b = NULL;
	if (!w)
		return (0);
	if (ft_sorted_q(a, b))
		return (1);
	if (!a)
		return (0);
	while (w[i])
	{
		ft_swapper(&a, &b, w[i]);
		i++;
	}
	return (ft_sorted_q(a, b));
}
