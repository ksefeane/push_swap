/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:13:23 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/19 12:35:55 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int		*ft_holnum(lnk *a)
{
	int		*nums;
	int		i;
	lnk		*k;

	if (!a)
		return (NULL);
	k = a;
	i = ft_lnklen(a);
	nums = (int *)malloc(sizeof(int) * i);
	i = 0;
	while (k)
	{
		nums[i++] = ft_atoi(k->num);
		k = k->next;
	}
	return (nums);
}
