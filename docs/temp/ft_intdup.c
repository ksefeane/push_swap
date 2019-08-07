/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:04:31 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/31 15:25:47 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int		*ft_intdup(int ni, int *n)
{
	int		i;
	int		*a;
	
	i = 0;
	if (!(a = (int *)malloc(sizeof(int) * ni)))
		return (NULL);
	ft_intcpy(ni, a, n);
	return (a);
}
