/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:19:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/07/17 14:39:32 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;
	int	n;

	n = ft_strlen(s1);
	if (!(a = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
