/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:16:05 by ksefeane          #+#    #+#             */
/*   Updated: 2019/09/04 17:19:26 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef	struct	s_t_lnk
{
	char			*num;
	struct s_t_lnk	*next;
}				t_lnk;

t_lnk			*ft_lnknew(char *s);
int			ft_lnkadd(t_lnk **node, char *s);
int			ft_lnkaddl(t_lnk **node, char *s);
int			ft_lnkdel(t_lnk **node);
int			ft_lnkdell(t_lnk **node);
int			ft_lnkcdel(t_lnk **node, unsigned int c);
int			ft_lnkxdel(t_lnk **node);

t_lnk			*ft_builder(char **s);
int				ft_alldigit(char **s);
int				ft_customs(char **s, int c);

char			**ft_strxdup(char **s);
void			ft_strxdel(char ***s);

int				ft_push_swap(char **av, int c, char **w);
void			ft_printer(t_lnk *a, t_lnk *b);
int				ft_instructor(t_lnk **a, t_lnk **b, char *moves);
int				ft_swapper(t_lnk **a, t_lnk **b, char *c);

int				ft_sorted_q(t_lnk *a, t_lnk *b);
int				ft_sorted_r(t_lnk *a);
int				ft_sorted(t_lnk *a, t_lnk *b);

int				ft_nstr(char **s);
int				*ft_ltoai(t_lnk *a);
int				ft_lnklen(t_lnk *a);
int				ft_findex(t_lnk *a, int c);
int				ft_findfit(t_lnk *a, int c);

int				ft_three(t_lnk **a, char **moves);
int				ft_five(t_lnk **a, t_lnk **b, char **moves);
int				ft_hunnid(t_lnk **a, t_lnk **b, char **moves);

int				ft_perm3(t_lnk *a, char **h);
int				ft_perm5(t_lnk *a, char **h);
int				ft_perm100(t_lnk *a, t_lnk *b, char **h);
#endif
