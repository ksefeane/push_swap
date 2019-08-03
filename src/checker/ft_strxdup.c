/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:45:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 15:47:34 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

char	**ft_strxdup(char **s, int n)
{
	char	**w;
	int		k;

	k = 0;
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
