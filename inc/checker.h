/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:28:33 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/07 13:11:27 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

typedef struct	s_lnk
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
void	ft_printer(lnk *a, lnk *b);
int		ft_instructor(lnk **a, lnk **b, char **moves);
int		ft_sorted(lnk *a, lnk *b);

int		ft_checker(char	**av, char *i, int c);
int		ft_swapper(lnk **a, lnk **b, char *c);

int		ft_alldigit(int ni, char **av);
int		ft_nstr(char **s);


#endif
