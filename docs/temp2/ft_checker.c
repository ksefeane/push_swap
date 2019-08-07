/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:34:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/05 10:49:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(int na, int nb, char **a, char **b)
{
	char **s;

	if (!(s = ft_strxdup(a, 0)))
		return (0);
	ft_printer(na, nb, s, b);
	ft_swapper(na, nb, &s, &b, "sa");
	ft_printer(na, nb, s, b);
//	ft_swapper(na, nb, &a, &b, "pa");
//	ft_printer(na, nb, s, b);
	return (1);
}
