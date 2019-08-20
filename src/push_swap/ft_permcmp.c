/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:30:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/19 15:38:55 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_perm2(int *a, char **h)
{
	*h = ft_strdup("sa ");
	return (1);
}

int		ft_perm3(int *a, char **h)
{
	if (a[0] > a[1])
    {
        if (a[0] > a[2])
            *h = (a[1] > a[2]) ? ft_strdup("ra sa") : ft_strdup("ra");
        else
            *h = ft_strdup("sa");
    }
    else
        *h = (a[0] > a[2]) ? ft_strdup("rra") : ft_strdup("rra sa");
	return (1);
}

int		ft_perm4(int *a, char **h)
{
	if (a[0] < a[1])
	{
		if (a[1] < a[2])
			*h = ft_strdup("rra ");
		else
			*h = (a[2] > a[3]) ? ft_strdup("ra ") : ft_strdup("rra ");
	}
	else
	{
		if (a[1] > a[2])
		{
			if (a[2] > a[3])
				*h = ft_strdup("sa ");
			else
				*h = (a[3] < a[0]) ? ft_strdup("sa ") : ft_strdup("rra ");
		}
		else
		{
			if (a[2] < a[3])
				*h = (a[3] > a[0]) ? ft_strdup("sa ") : ft_strdup("ra ");
			else
				*h = (a[3] < a[0]) ? ft_strdup("sa ") : ft_strdup("ra ");
		}
	}
	return (1);
}
