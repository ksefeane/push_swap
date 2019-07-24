/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:46:09 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/24 12:47:41 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_stacks(int ac)
{
	return (ac);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	if (ac > 1)
	{
		if (!ft_alldigit(ac, av))
		{
			ft_putendl("error");
			return (-1);
		}
		ft_checker(ac, av);
	}
	return (0);
}
