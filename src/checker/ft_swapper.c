/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 10:21:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/31 14:17:22 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		*sa(int ni, int *ai)
{
		int		*a;
		
		if (!(a = ft_intdup(ni, ai)))
			return (NULL);
		a[0] = ai[1];
		a[1] = ai[0];
		return (a);
}

int		ft_swapper(int ni, int **ai, int **bi, char *c)
{
	int *a;
	int	*b;
	char *x;

	x = c;
	a = *ai;
	b = *bi;
	if (ft_strcmp(c, "sa"))
	{

	}
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))
	else if (ft_strcmp(c, "sb"))

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
