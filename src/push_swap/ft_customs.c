/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_customs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:57:21 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/10 10:31:34 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int		ft_checkdigit(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

static int		ft_maxint(char *s)
{
	int		i;
	char	*w;

	i = ft_atoi(s);
	w = ft_itoa(i);
	free(w);
	return ((ft_strequ(s, w)) ? 1 : 0);
}

static int		ft_security_checks(char **s)
{
	int		i;
	int		j;

	i = 0;
	j = i + 1;
	while (s[i])
	{
		if (!ft_checkdigit(s[i]) || !ft_maxint(s[i]))
			return (0);
		while (s[j])
		{
			if (ft_strequ(s[i], s[j]) && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int				ft_customs(char **s, int c)
{
	char	**temp;
	int		i;

	temp = (c == 1) ? ft_strsplit(s[0], ' ') : s;
	i = ft_security_checks(temp);
	if (c == 1)
		ft_strxdel(&temp);
	(i == 0) ? ft_putendl("Error") : 0;
	return (i);
}
