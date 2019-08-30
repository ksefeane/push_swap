/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_juggler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:22:30 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/30 12:32:33 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_juggler(lnk *a, char *moves)
{
	int		i;
	lnk		*b;

	i = 0;
	b = NULL;
	if (ft_sorted_q(a, b) || !moves)
		return (ft_sorted(a, b));
	ft_instructor(&a, &b, moves);
	return (ft_sorted(a, b));
}
