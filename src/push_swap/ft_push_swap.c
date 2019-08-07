/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:34:32 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 14:27:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_push_swap(char **av, int c)
{
	lnk		*a;
	lnk		*b;
	char	*w;

	w = NULL;
	if (!av)
		return (0);
	a = (c == 1) ? ft_builder(ft_strsplit(av[0], ' ')) :
		ft_builder(av);
	b = NULL;
	ft_sort_algo(a, b, &w);
	ft_checker(av, w, c);
	ft_putendl(w);
	return (1);
}
