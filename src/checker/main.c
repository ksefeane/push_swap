/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:46:09 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 13:30:05 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		main(int ac, char **av)
{
	char	*w;
	int	fd;

	if (ac > 1)
	{
		fd = 1;
		get_next_line(fd, &w);
		ft_checker(av + 1, w);
	}
	else
		ft_putchar('\n');
	return (0);
}
