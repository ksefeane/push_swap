/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 14:28:43 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/21 13:12:50 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		ft_sort_algo(lnk *a, lnk *b, char ***moves)
{
	int		n;

	n = ft_lnklen(a);
	if (n == 2)
		return (ft_two(&a, moves));
	else if (n == 3)
		return (ft_three(&a, moves));
	else if (n == 4)
		return (ft_four(&a, &b, moves));
	else if (n == 5)
		return (ft_five(&a, &b, moves));
	else if (n == 100)
		return (ft_hundred(&a, &b, moves));
	else if (n == 500)
		return (0);
	return (ft_sorted(a, b));
}
