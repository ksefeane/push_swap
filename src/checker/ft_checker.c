/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:34:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/26 13:11:08 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(int ni, int *ai)
{
	int		i;
	int		*bi;
	int		g;

	i = 0;
	g = ft_maxgap(ni, ai);
	if (!(bi = (int *)malloc(sizeof(int) * ni)))
		return (0);
	while (i < ni)
	{
		bi[i] = 0;
		ft_putnbr(ai[i]);
		ft_printgaps(g);
		ft_putnbr(bi[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('_');
	ft_printgaps(g);
	ft_putendl("_");
	ft_putchar('a');
	ft_printgaps(g);
	ft_putendl("b");
	return (1);
}
