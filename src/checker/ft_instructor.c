/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:34:48 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/21 12:02:10 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int	ft_instructor(lnk **a, lnk **b, char **moves)
{
	int	i;
	
	i = 0;
	if (!moves)
		return (0);
	while (moves[i])
	{
		ft_swapper(a, b, moves[i]);
		i++;
	}
	return (ft_sorted_q(*a, *b));
}
