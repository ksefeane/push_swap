/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:02:06 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:23:14 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_printer(t_lnk *a, t_lnk *b)
{
	while (a)
	{
		ft_putstr(a->num);
		ft_putstr(" ");
		a = a->next;
	}
	ft_putendl("a");
	while (b)
	{
		ft_putstr(b->num);
		ft_putstr(" ");
		b = b->next;
	}
	ft_putendl("b");
	ft_putendl("");
}
