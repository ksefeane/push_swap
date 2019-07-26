/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:34:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/26 11:16:04 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(int ni, int *ai)
{
	int		i;

	i = 0;
	while (i < ni)
	{
		ft_putnbr(ai[i]);
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar('\n');
		i++;
	}
	ft_putendl("_ _");
	ft_putendl("a b");
	return (1);
}
