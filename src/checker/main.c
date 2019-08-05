/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:46:09 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/05 13:03:03 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (!ft_alldigit(ac - 1, av + 1))
		{
			ft_putendl("error");
			return (-1);
		}
		ft_putnbr(ft_nstr(av + 1));
	}
	else
		ft_putchar('\n');
	return (0);
}
