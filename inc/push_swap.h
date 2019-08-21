/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 06:36:34 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/21 13:18:15 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "checker.h"

int		ft_push_swap(char **av, int c, char **w);
int		ft_sort_algo(lnk *a, lnk *b, char ***moves);

int		ft_perm2(int *a, char **h);
int		ft_perm3(int *a, char **h);
int		ft_perm4(int *a, char **h);
int		ft_perm5(lnk *a, char **h);
int		ft_perm100(lnk *a, char **h);

int		ft_two(lnk **p, char ***w);
int		ft_three(lnk **p, char ***w);
int		ft_four(lnk **p, lnk **q, char ***w);
int		ft_five(lnk **p, lnk **q, char ***w);
int		ft_hundred(lnk **p, lnk **q, ***w);

int		*ft_holnum(lnk *a);
int		ft_findlow(lnk *a);

int		ft_lnklen(lnk *a);
int		ft_juggler(lnk *a, char **w);
int		ft_sorted_q(lnk *a, lnk *b);

char		*ft_strglue(char **s);
#endif
