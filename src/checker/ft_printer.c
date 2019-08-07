/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:02:06 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 07:44:02 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

void	ft_printer(lnk *a, lnk *b, char *moves)
{/*
	int	i;

	i = 0;
	while (moves[i])
	{
		ft_putstr(a->num);
		ft_putstr(" ");
		ft_putendl(b->num);
		i++;
		(a->next) ? a = a->next : 0;
		(b->next) ? b = b->next : 0;
	}
	ft_putstr("a b  ");
	ft_putendl(moves);
	ft_putendl("");
*/
	if (moves != NULL)
		return ;
	while (a)
	{
		ft_putstr(a->num);
		ft_putstr(" ");
		a = a->next;
	}
	ft_putstr("a ");
	ft_putendl(moves);
	while (b)
	{
		ft_putstr(b->num);
		ft_putstr(" ");
		b = b->next;
	}
	ft_putendl("b");
	
	ft_putendl("");
}
