/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:48:55 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/19 16:00:45 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int		ft_numlen(int *a)
{
	int		i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int		main(void)
{
	int a[6] = {1, 2, 3, 4, 5, 9};
	int	n;
	int	m;

	n = sizeof(a)/sizeof(int);
	m = ft_strlen("hello");
	ft_putnbr(n);
	ft_putchar('\n');
	ft_putnbr(m);
	return (0);
}
