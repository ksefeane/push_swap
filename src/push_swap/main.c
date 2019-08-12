/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:46:09 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 14:53:17 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		main(int ac, char **av)
{
	char	*w;

	w = NULL;
	if (ac > 2 && ft_alldigit(ac - 1, av + 1))
	{
		ft_push_swap(av + 1, ac - 1, &w);
		ft_putstr_fd(w, 1);
		free(w);
	}
	else
		ft_putchar('\n');
	return (0);
}
