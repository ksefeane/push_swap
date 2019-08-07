/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:46:09 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 11:03:24 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_scanner(int fd, char **w)
{
	char	*h;
	char	*cache;
	char	*read;

	h = NULL;
	read = NULL;
	cache = ft_strnew(0);
	while (get_next_line(fd, &read) != 0)
	{
		h = cache;
		cache = ft_strjoin(cache, read);
		free(h);
		h = cache;
		cache = ft_strjoin(cache, " ");
		free(h);
		free(read);
	}
	*w = ft_strdup(cache);
	free(cache);
	return (1);
}

int		main(int ac, char **av)
{
	char	*w;
	int	fd;

	w = NULL;
	if (ac > 1)
	{
		fd = 0;
		ft_scanner(fd, &w);
		ft_checker(av + 1, w, ac - 1);
		free(w);
	}
	else
		ft_putchar('\n');
	return (0);
}
