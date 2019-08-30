/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:15:26 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/30 12:45:16 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(char **av, char *moves, int c)
{
	lnk		*a;
	lnk		*b;
	char	**temp;
	int		i;

	if (c == 1)
	{
		temp = ft_strsplit(av[0], ' ');
		a = ft_builder(temp);
		ft_strxdel(&temp);
	}
	else
		a = ft_builder(av);
	b = NULL;
	ft_instructor(&a, &b, moves);
	i = ft_sorted(a, b);
	ft_lnkxdel(&a);
	return (i);
}
