/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:30:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/15 12:42:16 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_permcmp(int a, int b, int c, int d, char **h)
{
	if (a < b)
	{
		if (b < c)
			*h = ft_strdup("rra ");
		else
			*h = (c > d) ? ft_strdup("ra ") : ft_strdup("rra ");
	}
	else
	{
		if (b > c)
		{
			if (c > d)
				*h = ft_strdup("sa ");
			else
				*h = (d < a) ? ft_strdup("sa ") : ft_strdup("rra ");
		}
		else
		{
			if (c < d)
				*h = (d > a) ? ft_strdup("sa ") : ft_strdup("ra ");
			else
				*h = (d < a) ? ft_strdup("sa ") : ft_strdup("ra ");
		}
	}
	return (1);
}
