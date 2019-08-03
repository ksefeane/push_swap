/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:28:33 by ksefeane          #+#    #+#             */
/*   Updated: 2019/08/03 14:27:55 by ksefeane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

int		ft_alldigit(int ni, char **av);
//int		*ft_atoai(int ni, char **av);
int		ft_checker(int na, int nb, char **a, char **b);
int		ft_swapper(int na, int nb, char ***a, char ***b, char *c);
int		ft_printer(int na, int nb, char **a, char **b);
char	**ft_strxdup(char **s);
int		ft_nstr(char **s);
//int		ft_sortop(int ni, int *ai, char *op);
//void	ft_printgaps(int n);
//int		ft_countnum(int n);
//int		ft_maxgap(int ni, int *ai);
//int		ft_swapper(int ni, int **ai, int **bi, char *c);
//int		ft_printer(int ni, int *ai, int *bi);
//int		*ft_intdup(int ni, int *n);
//int		ft_intcpy(int ni, int *a, int *b);

#endif
