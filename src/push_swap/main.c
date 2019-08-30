/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:12:49 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/30 12:09:57 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		main(int ac, char **av)
{
	char	*w;

	w = NULL;
	if (ac > 1)
	{
		ft_push_swap(av + 1, ac - 1, &w);
		ft_putstr_fd(w, 1);
		free(w);
	}
	else
		ft_putchar('\n');
//	while (1);
	return (0);
}
