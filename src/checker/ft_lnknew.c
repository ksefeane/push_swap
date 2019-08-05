/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:06:12 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/05 14:05:14 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

link	*ft_lnknew(int n)
{
	link	*k;

	k = NULL;
	if (!(k = (link *)malloc(sizeof(link))))
		return (NULL);
	k->num = NULL;
	k->next = NULL;
	return (k);
}
