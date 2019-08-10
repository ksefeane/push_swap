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
#include <fcntl.h>

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
	}
	else
		ft_putendl("");
	return (0);
}
