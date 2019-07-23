/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:28:42 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/23 11:08:28 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_alldigit(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
					return (0);
			j++;
		}
		i++;
	}
	ft_putendl("\nall digits");
	return (1);
}

int		ft_check(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		ft_putendl(av[i]);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	ft_putnbr(ac);
	if (ac == 1)
		return (0);
	if (ac > 1)
	{
		if (!ft_alldigit(ac, av))
			return (-1);
		ft_check(ac, av);
	}
	return (0);
}
