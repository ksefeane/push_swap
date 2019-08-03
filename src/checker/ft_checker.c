/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:34:46 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 15:34:26 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(int na, int nb, char **a, char **b)
{
	ft_printer(na, nb, a, b);
	ft_swapper(na, nb, &a, &b, "sa");
	ft_printer(na, nb, a, b);
	ft_swapper(na, nb, &a, &b, "pa");
	ft_printer(na, nb, a, b);
	return (1);
}
