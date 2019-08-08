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

int		ft_checker(char **av, char *i, int c)
{
	lnk		*a;
	lnk		*b;
	char	**moves;
	char	**h;

	a = (c == 1) ? ft_builder(ft_strsplit(av[0], ' ')) :
		ft_builder(av);
	b = NULL;
	moves = ft_strsplit(i, '\n');
	h = moves;
	moves = ft_strsplit(moves[0], ' ');
	(h) ? free(h) : 0;
	ft_instructor(&a, &b, moves);
	ft_lnkxdel(&a);
	return (1);
}
