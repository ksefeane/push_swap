/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:29:13 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 14:14:13 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		ft_checker(lnk *a)
{
	lnk		*b;

	b = NULL;
	ft_printer(a, b);

	ft_swapper(&a, &b, "pb");
	ft_printer(a, b);

	ft_swapper(&a, &b, "pb");
	ft_printer(a, b);

	ft_swapper(&a, &b, "sb");
	ft_printer(a, b);
	return (1);
}
