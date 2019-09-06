/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scanner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:12 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 16:11:54 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_scanner(const int fd, char **w)
{
	char	*read;
	char	*cache;
	char	*h;

	read = NULL;
	cache = ft_strnew(0);
	while (get_next_line(fd, &read) > 0)
	{
		h = cache;
		cache = ft_strjoin(cache, read);
		free(h);
		h = cache;
		cache = ft_strjoin(cache, "\n");
		free(h);
		free(read);
	}
	*w = ft_strsub(cache, 0, ft_strlen(cache) - 1);
	free(cache);
	return (1);
}
