/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_tower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hao <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:28:45 by Hao               #+#    #+#             */
/*   Updated: 2024/03/19 10:09:02 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_condition_arr(char *input, int dim)
{
	char	*cond;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cond = (char *)malloc(((4 * dim) + 1) * sizeof(char));
	if (!cond)
		return (0);
	ft_init_arr(cond, (4 * dim));
	while (input[i])
	{
		if ((i % 2) == 0)
		{
			cond[j] = input[i];
			j++;
		}
		i++;
	}
	cond[j] = '\0';
	return (cond);
}

int	ft_tower_cond(char *sol, char *cond, int dim)
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

void	ft_solver(char *sol, char *cond, int col, int *count)
{
	int	i;
	int	dim;

	i = 1;
	dim = (ft_strlen(cond) / 4);
	if (col >= (dim * dim))
	{
		*count += 1;
		ft_print_sol(sol, dim);
		return ;
	}
	while (i <= dim)
	{
		sol[col] = (i + '0');
		if (ft_tower_cond(sol, cond, dim) == 1)
			ft_solver(sol, cond, col + 1, count);
		sol[col] = '\0';
		i++;
	}
	return ;
}

void	ft_solve_tower(char *input, int dim, int *count)
{
	char	*cond;
	char	*sol;

	cond = ft_condition_arr(input, dim);
	if (!cond)
		return ;
	sol = (char *)malloc(((dim * dim) + 1) * sizeof(char));
	if (!sol)
		return ;
	ft_init_arr(sol, (dim * dim));
	ft_solver(sol, cond, 0, count);
	free(sol);
	free(cond);
	return ;
}
