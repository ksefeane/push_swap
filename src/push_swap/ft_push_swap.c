/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:34:32 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 10:51:55 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_push_swap(char **av)
{
	if (!av)
		return (0);
	ft_putendl_fd("sa\npb\npb", 1);
	return (1);



	/*
	int		i;
	char	**moves;
	char	*w;
	char	*h;

	i = 0;
	moves = ft_strsplit(av[0], ' ');
	w = ft_strnew(0);;
	h = NULL;
	while (moves[i])
	{
		h = w;
		w = ft_strjoin(w, moves[i]);
		(h) ? free(h) : 0;
		h = w;
		(moves[i + 1] != NULL) ? w = ft_strjoin(w, "\n") : 0;
		(h) ? free(h) : 0;
		i++;
	}
	ft_putendl(w);
	return (1);*/
}
