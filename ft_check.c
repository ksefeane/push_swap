/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:28:42 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/23 10:36:29 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_check(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
			ft_putendl(av[i++]);
	}
	return (1);
}

int		main(int ac, char **av)
{
	ft_check(ac, av);
	return (0);
}
