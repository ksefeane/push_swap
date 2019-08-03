/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:21:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 14:33:20 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		sa(char ***a)
{
	char	**x;
	char	**y;
		
	if (!(x = ft_strxdup(*a)))
		return (0);
	y = *a;
	ft_strcpy(x[0], y[1]);
	ft_strcpy(x[1], y[0]);
	*a = ft_strxdup(x);
	free(x);
	return (1);
}
/*
int		pa(int ni, int **ai, int **bi)
{
	int		*a;
	int		*b;
	int		*x;
	int		*y;

	if ((!(a = ft_atoai(ni + 1, NULL))) || (!(b = ft_intdup(ni - 1, *bi))))
		return (0);
	x = *ai;
	y = *bi;
	a[0] = y[0];
	ft_intcpy(ni + 1, &a[1], x);
	*ai = ft_intdup(ni + 1, a);
	*bi = b;
	free(x);
	free(y);
	return (1);
}
*/
int		ft_swapper(int na, int nb, char ***a, char ***b, char *c)
{
	if (ft_strequ(c, "sa"))
		sa(a);
	if (na || nb || a || b)
		return (1);
/*	else if (ft_strequ(c, "sb"))
		sa(ni, bi);
	else if (ft_strequ(c, "ss"))
		(sa(ni, ai)) ? sa(ni, bi) : 0;
	else if (ft_strequ(c, "pa"))
		pa(ni, ai, bi);

	
*/	return (1);
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
