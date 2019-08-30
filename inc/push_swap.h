/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:16:05 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/29 15:13:02 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef	struct	s_lnk
{
	char			*num;
	struct s_lnk	*next;
}				lnk;

lnk		*ft_lnknew(char *s);
void	ft_lnkadd(lnk **node, char *s);
void	ft_lnkaddl(lnk **node, char *s);
void	ft_lnkdel(lnk **node);
void	ft_lnkdell(lnk **node);
void	ft_lnkxdel(lnk **node);
lnk		*ft_builder(char **s);

void	ft_strxdel(char ***s);

int		ft_push_swap(char **av, int c, char **w);
void	ft_printer(lnk *a, lnk *b);
int		ft_instructor(lnk **a, lnk **b, char *moves);
int		ft_swapper(lnk **a, lnk **b, char *c);
int		ft_sorted_q(lnk *a, lnk *b);
int		ft_sorted(lnk *a, lnk *b);

int		ft_nstr(char **s);
int		*ft_ltoai(lnk *a);
int		ft_lnklen(lnk *a);
int		ft_findex(lnk *a, int c);

int		ft_three(lnk **a, char **moves);
int		ft_five(lnk **a, lnk **b, char **moves);

int		ft_perm3(lnk *a, char **h);
int		ft_perm5(lnk *a, char **h);

#endif
