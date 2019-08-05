/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:45:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/05 10:48:20 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

char	**ft_strxdup(char **s, int x)
{
	char	**w;
	int		k;
	int		n;

	k = 0;
	if (!s)
		return (NULL);
	n = ft_nstr(s) - x;
	if (n < 1)
		return (NULL);
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
