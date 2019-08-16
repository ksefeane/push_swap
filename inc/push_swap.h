/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:36:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/15 12:27:37 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "checker.h"

int		ft_push_swap(char **av, int c, char **w);
int		ft_sort_algo(lnk *a, lnk *b, char ***moves);
int		ft_permcmp(int a, int b, int c, int d, char **h);

int		ft_lnklen(lnk *a);
int		ft_juggler(lnk *a, char **w);
int		ft_sorted_q(lnk *a, lnk *b);

char		*ft_strglue(char **s);
#endif
