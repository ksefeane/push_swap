/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:34:32 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/14 12:47:15 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_push_swap(char **av, int c, char **w)
{
	lnk		*a;
	lnk		*b;
	char		**moves;

	if (!av)
		return (0);
	a = (c == 1) ? ft_builder(ft_strsplit(av[0], ' ')) :
		ft_builder(av);
	b = NULL;
	moves = NULL;
	ft_sort_algo(a, b, &moves);
	*w = ft_strglue(moves);
	ft_lnkxdel(&a);
	return (1);
}
