/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:35:13 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/19 10:07:43 by Hao              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_sol(char *sol, int dim);
void	ft_init_arr(char *arr, unsigned int size);
void	ft_solve_tower(char *input, int dim, int *count);
int		ft_strlen(char *str);
int		ft_input_check(char *input);
int		ft_tower_cond_row_rpt(char *sol, int dim);
int		ft_tower_cond_col_rpt(char *sol, int dim);
int		ft_tower_cond_row_sum_left(char *sol, char *cond, int dim);
int		ft_tower_cond_row_sum_right(char *sol, char *cond, int dim);
int		ft_tower_cond_col_sum_top(char *sol, char *cond, int dim);
int		ft_tower_cond_col_sum_down(char *sol, char *cond, int dim);

#endif
