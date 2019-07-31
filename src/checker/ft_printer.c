/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:15:10 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/31 14:46:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_printer(int ni, int *ai, int *bi)
{
	int i;
	int g;

	i = 0;
	g = ft_maxgap(ni, ai);
	while (i < ni)
	{
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
