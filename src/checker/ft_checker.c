/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:29:13 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 15:09:26 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"
#include "../../inc/push_swap.h"

int		ft_checker(char **av, char *i, int c)
{
	lnk		*a;
	lnk		*b;
	char	**moves;

	a = (c == 1) ?
		ft_builder(ft_strsplit(av[0], ' ')) :
		ft_builder(av);
	b = NULL;
	if (ft_sorted_q(a, b))
		return (ft_sorted(a, b));
	moves = ft_strsplit(i, 10);
	ft_instructor(&a, &b, moves);
	ft_lnkxdel(&a);
	return (1);
}
