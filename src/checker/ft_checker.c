/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:29:13 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 14:14:13 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(char **av, char *i)
{
	lnk	*a;
	lnk	*b;
	char	**moves;

	a = ft_builder(av);
	b = NULL;
	moves = ft_strsplit(i, ' ');
	ft_instructor(a, b, moves);
	return (1);
}
