/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:20:22 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/06 12:34:16 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

lnk	*ft_builder(char **s)
{
	lnk	*k;
	int		i;
	int		n;

	if (!s)
		return (NULL);
	i = 0;
	n = ft_nstr(s);
	if (!(k = ft_lnknew(s[i++])))
		return (NULL);
	while (i < n)
	{
		ft_lnkaddl(&k, s[i]);
		i++;
	}
	return (k);
}
