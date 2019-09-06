/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:11:08 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 15:20:37 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

char			**ft_rules(void)
{
	char	**temp;

	temp = (char **)malloc(sizeof(char *) * 12);
	temp[0] = ft_strdup("sa");
	temp[1] = ft_strdup("sb");
	temp[2] = ft_strdup("ss");
	temp[3] = ft_strdup("pa");
	temp[4] = ft_strdup("pb");
	temp[5] = ft_strdup("ra");
	temp[6] = ft_strdup("rb");
	temp[7] = ft_strdup("rr");
	temp[8] = ft_strdup("rra");
	temp[9] = ft_strdup("rrb");
	temp[10] = ft_strdup("rrr");
	temp[11] = NULL;
	return (temp);
}

int				ft_strsearch(char **s, char *c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (ft_strequ(s[i], c))
			return (1);
		i++;
	}
	return (0);
}

static int		ft_move_check(char **s, int (*f)(char **, char *))
{
	int		i;
	char	**r;

	i = 0;
	r = ft_rules();
	while (s[i])
	{
		if (!f(r, s[i]))
			return (0);
		i++;
	}
	return (1);
}

int				ft_secure(char *s)
{
	char	**temp;
	int		i;

	temp = ft_strsplit(s, 10);
	i = ft_move_check(temp, &ft_strsearch);
	ft_strxdel(&temp);
	return (i);
}
