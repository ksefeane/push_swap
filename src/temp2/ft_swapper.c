/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:21:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/05 10:49:22 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static int		sa(char ***a)
{
	char	**x;
	char	**y;
	int		i;

	i = ft_nstr(*a);
	if (!(x = ft_strxdup(*a, 0)))
		return (0);
	y = *a;
	ft_strcpy(x[0], y[1]);
	ft_strcpy(x[1], y[0]);
	*a = ft_strxdup(x, 0);
	free(x);
	return (1);
}

static int		pa(char ***a, char ***b)
{
	char	**s1;
	char	**s2;
	char	**x;
	char	**y;

	x = *a;
	y = *b;
	if (!(s1 = ft_strxdup(y, 0)))
		return (0);
	if (!(s2 = ft_strxdup(x, 0)))
		return (0);
	ft_strcpy(s1[0], y[0]);
	*a = ft_strxdup(s1, 0);
	*b = ft_strxdup(s2, 0);
	free(x);
	free(y);
	return (1);
}

int		ft_swapper(int na, int nb, char ***a, char ***b, char *c)
{
	if (ft_strequ(c, "sa"))
		sa(a);
	else if (ft_strequ(c, "pa"))
		pa(a, b);
/*	else if (ft_strequ(c, "sb"))
		sa(ni, bi);
	else if (ft_strequ(c, "ss"))
		(sa(ni, ai)) ? sa(ni, bi) : 0;
	else if (ft_strequ(c, "pa"))
		pa(ni, ai, bi);

	
*/	if (na || nb || *a || *b || c)
		return (1);
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
