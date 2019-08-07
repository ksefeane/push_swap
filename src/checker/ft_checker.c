/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:29:13 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 10:55:26 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(char **av, char *i, int c)
{
	lnk	*a;
	lnk	*b;
	char	**moves;

	a = (c == 1) ? ft_builder(ft_strsplit(av[0], ' ')) : ft_builder(av);
	b = NULL;
	moves = ft_strsplit(i, '\n');
	ft_instructor(a, b, moves);
	ft_sorted(a, b);
	return (1);
}
