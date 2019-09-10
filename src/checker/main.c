/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:15:35 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/10 10:34:57 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		main(int ac, char **av)
{
	char	*w;
	int		fd;

	w = NULL;
	if (ac == 1)
		return (0);
	if (!ft_customs(av + 1, ac - 1))
		return (0);
	if (ac > 1)
	{
		fd = 0;
		ft_scanner(fd, &w);
		if (!ft_secure(w))
		{
			ft_putendl("Error");
			return (0);
		}
		ft_checker(av + 1, w, ac - 1);
		free(w);
	}
	else
		ft_putchar('\n');
	return (0);
}
