/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:13 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 18:31:55 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_sol(int *sol, int dim);
void	ft_init_arr(int *arr, unsigned int size);
void	ft_solve_tower(char *input, int dim, int *count);
int		ft_input_check(char *input);
int		ft_tower_cond_row_rpt(int *sol, int dim);
int		ft_tower_cond_col_rpt(int *sol, int dim);
int		ft_tower_cond_row_sum_left(int *sol, int *cond, int dim);
int		ft_tower_cond_row_sum_right(int *sol, int *cond, int dim);
int		ft_tower_cond_col_sum_top(int *sol, int *cond, int dim);
int		ft_tower_cond_col_sum_down(int *sol, int *cond, int dim);

#endif
