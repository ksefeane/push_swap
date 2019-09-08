/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:22:59 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:31:49 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	ft_sort_num(t_lnk **a, t_lnk **b, char **moves)
{
	int		n;

	n = ft_lnklen(*a);
	if (n == 3)
		return (ft_three(a, moves));
	else if (n == 5)
		return (ft_five(a, b, moves));
	else if (n == 100)
		return (ft_hunnid(a, b, moves));
	else if (n == 500)
		return (ft_hunnid(a, b, moves));
	else
		return (0);
}

int			ft_push_swap(char **av, int c, char **w)
{
	t_lnk		*a;
	t_lnk		*b;
	char	**temp;

	if (c == 1)
	{
		temp = ft_strsplit(av[0], ' ');
		a = ft_builder(temp);
		ft_strxdel(&temp);
	}
	else
		a = ft_builder(av);
	b = NULL;
	ft_sort_num(&a, &b, w);
	ft_lnkxdel(&a);
	return (1);
}
