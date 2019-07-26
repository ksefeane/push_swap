/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoai.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 16:28:31 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/26 11:07:39 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		*ft_atoai(int ni, char **av)
{
	int		*a;
	int		k;

	a = NULL;
	k = 0;
	if (!ft_alldigit(ni, av))
		return (a);
	if (!(a = (int *)malloc(sizeof(int) * ni)))
		return (a);
	while (k < ni)
	{
		a[k] = ft_atoi(av[k]);
		k++;
	}
	return (a);
}
