/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:00:35 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/03 13:08:15 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

char	**ft_strxdup(char **s)
{
	char	**temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	temp = (char **)malloc(sizeof(char *) * (j + 1));
	while (s[i])
	{
		temp[i] = ft_strdup(s[i]);
		i++;
	}
	temp[i] = NULL;
	return (temp);
}
