/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_tower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hao <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:28:45 by Hao               #+#    #+#             */
/*   Updated: 2024/03/18 18:34:19 by Hao              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*ft_condition_arr(char *input, int dim)
{
	int	*cond;
	int	i;
	int	j;

	i = 0;
	j = 0;
	cond = (int *)malloc((4 * dim) * sizeof(int));
	if (!cond)
		return (0);
	ft_init_arr(cond, (4 * dim));
	while (input[i])
	{
		if ((i % 2) == 0)
		{
			cond[j] = (input[i] - '0');
			j++;
		}
		i++;
	}
	return (cond);
}

int	ft_tower_cond(int *sol, int *cond, int dim)
{
	int	score_1;
	int	score_2;
	int	score_3;
	int	score_4;

	score_1 = ft_tower_cond_row_rpt(sol, dim);
	score_2 = ft_tower_cond_col_rpt(sol, dim);
	score_3 = ft_tower_cond_row_sum_left(sol, cond, dim)
		+ ft_tower_cond_row_sum_right(sol, cond, dim);
	score_4 = ft_tower_cond_col_sum_top(sol, cond, dim)
		+ ft_tower_cond_col_sum_down(sol, cond, dim);
	if ((score_1 + score_2 + score_3 + score_4) == 6)
		return (1);
	return (0);
}

void	ft_solver(int *sol, int *cond, int dim, int col, int *count)
{
	int	i;

	i = 1;
	if (col >= (dim * dim))
	{
		*count += 1;
		ft_print_sol(sol, dim);
		return ;
	}
	while (i <= dim)
	{
		sol[col] = i;
		if (ft_tower_cond(sol, cond, dim) == 1)
			ft_solver(sol, cond, dim, col + 1, count);
		sol[col] = 0;
		i++;
	}
	return ;
}

void	ft_solve_tower(char *input, int dim, int *count)
{
	int	*cond;
	int	*sol;

	cond = ft_condition_arr(input, dim);
	if (!cond)
		return ;
	sol = (int *)malloc((dim * dim) * sizeof(int));
	if (!sol)
		return ;
	ft_init_arr(sol, (dim * dim));
	ft_solver(sol, cond, dim, 0, count);
	free(sol);
	free(cond);
	return ;
}
