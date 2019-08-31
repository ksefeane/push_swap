/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:36:54 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/30 14:41:19 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_instructor(lnk **a, lnk **b, char *moves)
{
	int		i;
	char	**temp;

	i = 0;
	if (!moves)
		return (0);
	temp = ft_strsplit(moves, 10);
	while (temp[i])
	{
		ft_swapper(a, b, temp[i]);
//		ft_sorted(*a, *b);
//		ft_putendl(temp[i]);
//		ft_printer(*a, *b);
		i++;
	}
	ft_strxdel(&temp);
	return (ft_sorted_q(*a, *b));
}
