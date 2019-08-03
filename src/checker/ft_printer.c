/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:15:10 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 15:16:02 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_printer(int na, int nb, char **a, char **b)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = (na >= nb) ? na : nb;
	while (i < k)
	{
		ft_putstr(a[i]);
		ft_putstr(" ");
		(b) ? ft_putstr(b[i]) : ft_putstr("0");
		ft_putchar('\n');
		i++;
	}
	ft_putendl("_ _");
	ft_putendl("a b");
	ft_putendl("");
	return (1);
}
