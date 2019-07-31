/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:21:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/31 15:21:52 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		sa(int ni, int **ai)
{
	int		*a;
	int		*b;
		
	if (!(a = ft_intdup(ni, *ai)))
		return (0);
	b = *ai;
	a[0] = b[1];
	a[1] = b[0];
	*ai = ft_intdup(ni, a);
	free(b);
	free(a);
	return (1);
}

int		pa(int ni, int **ai, int **bi)
{
	int		*a;
	int		*b;
	int		*x;
	int		*y;

	if ((!(a = ft_atoai(ni + 1, NULL))) && (!(b = ft_atoai(ni - 1, NULL))))
		return (0);
	x = *ai;
	y = *bi;
	a[0] = y[0];
	ft_intcpy(ni, &a[1], x);
	free(x);
	free(y);
	return (1);
}

int		ft_swapper(int ni, int **ai, int **bi, char *c)
{
	if (ft_strequ(c, "sa"))
		sa(ni, ai);
	else if (ft_strequ(c, "sb"))
		sa(ni, bi);
	else if (ft_strequ(c, "ss"))
		(sa(ni, ai)) ? sa(ni, bi) : 0;
	else if (ft_strequ(c, "pa"))
		pa(ni, ai, bi);
	return (1);
	//sa - swap top 2 a elements
	//sb
	//ss - sa & sb
	//
	//pa - put top b on top a
	//pb
	//
	//ra - shift up all by 1
	//rb
	//rr - ra & rb
	//
	//rra - shift down all by 1
	//rrb
	//rrr - rra & rrb
}
