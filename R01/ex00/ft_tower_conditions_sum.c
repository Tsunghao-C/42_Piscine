/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tower_conditions_sum.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:11:38 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 17:47:26 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_tower_cond_row_sum_left(int *sol, int *cond, int dim)
{
	int	i;
	int	j;
	int	count_l;
	int	temp;

	i = 0;
	while (i < dim)
	{
		j = 0;
		temp = 0;
		count_l = 0;
		while (j < dim && sol[(i * dim) + j] != 0)
		{
			if (sol[(i * dim) + j] > temp)
			{
				count_l += 1;
				temp = sol[(i * dim) + j];
			}
			j++;
		}
		if ((j == dim) && (cond[(2 * dim) + i] != count_l))
			return (0);
		i++;
	}
	return (1);
}

int	ft_tower_cond_row_sum_right(int *sol, int *cond, int dim)
{
	int	i;
	int	j;
	int	count_r;
	int	temp;

	i = 0;
	while (i < dim)
	{
		j = (dim - 1);
		count_r = 0;
		temp = 0;
		while (j >= 0 && sol[(i * dim) + j] != 0)
		{
			if (sol[(i * dim) + j] > temp)
			{
				count_r += 1;
				temp = sol[(i * dim) + j];
			}
			j--;
		}
		if ((j == -1) && (cond[(3 * dim) + i] != count_r))
			return (0);
		i++;
	}
	return (1);
}

int	ft_tower_cond_col_sum_top(int *sol, int *cond, int dim)
{
	int	i;
	int	j;
	int	count_t;
	int	temp;

	i = 0;
	while (i < dim)
	{
		j = 0;
		count_t = 0;
		temp = 0;
		while (j < dim && sol[i + (j * dim)] != 0)
		{
			if (sol[i + (j * dim)] > temp)
			{
				count_t += 1;
				temp = sol[i + (j * dim)];
			}
			j++;
		}
		if ((j == dim) && (cond[(0 * dim) + i] != count_t))
			return (0);
		i++;
	}
	return (1);
}

int	ft_tower_cond_col_sum_down(int *sol, int *cond, int dim)
{
	int	i;
	int	j;
	int	count_d;
	int	temp;

	i = 0;
	while (i < dim)
	{
		j = (dim - 1);
		count_d = 0;
		temp = 0;
		while (j < dim && sol[i + (j * dim)] != 0)
		{
			if (sol[i + (j * dim)] > temp)
			{
				count_d += 1;
				temp = sol[i + (j * dim)];
			}
			j--;
		}
		if ((j == -1) && (cond[(1 * dim) + i] != count_d))
			return (0);
		i++;
	}
	return (1);
}
