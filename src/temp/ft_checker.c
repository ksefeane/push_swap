/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:34:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/31 15:32:13 by ksefeane         ###   ########.fr       */
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
	if (!(bi = ft_atoai(ni, NULL)))
		return (0);
	ft_printer(ni, ai, bi);
	ft_swapper(ni, &ai, &bi, "pa");
	ft_putendl("");
	ft_printer(ni + 1, ai, bi);
	return (1);
}
