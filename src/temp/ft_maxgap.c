/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxgap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:50:27 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/26 12:56:43 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_maxgap(int ni, int *ai)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < ni)
	{
		if (k < ft_countnum(ai[i]))
			k = ft_countnum(ai[i]);
		i++;
	}
	return (k);
}
