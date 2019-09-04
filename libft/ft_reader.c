/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:12:19 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:12:37 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_reader(const int fd, int n)
{
	char	*w;
	int		i;

	w = NULL;
	i = 0;
	if (n == 0)
		while (get_next_line(fd, &w) != 0)
		{
			ft_putendl(w);
			ft_strdel(&w);
		}
	else
		while (i++ < n)
		{
			get_next_line(fd, &w);
			ft_putendl(w);
			ft_strdel(&w);
		}
	return (1);
}
