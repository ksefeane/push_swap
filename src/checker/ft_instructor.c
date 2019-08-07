/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:34:48 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 13:12:24 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int	ft_instructor(lnk **a, lnk **b, char **moves)
{
	int	i;

	i = 0;
	while (moves[i])
	{
		ft_swapper(a, b, moves[i]);
		ft_printer(*a, *b);
		i++;
	}
	return (1);
}
