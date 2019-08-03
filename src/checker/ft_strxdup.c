/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:45:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 14:05:46 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

char	**ft_strxdup(char **s)
{
	char	**w;
	int		n;
	int		k;

	k = 0;
	n = ft_nstr(s);
	if (!(w = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	while (k < n)
	{
		w[k] = ft_strdup(s[k]);
		k++;
	}
	w[k] = NULL;
	return (w);
}
