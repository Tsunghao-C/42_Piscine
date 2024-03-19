/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tower_conditions_rpt.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:11:38 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/19 09:54:09 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_tower_cond_row_rpt(char *sol, int dim)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim && sol[(i * dim) + j])
		{
			k = 1;
			while ((j + k) < dim && sol[(i * dim) + j + k])
			{
				if (sol[(i * dim) + j] == sol[(i * dim) + j + k])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_tower_cond_col_rpt(char *sol, int dim)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim && sol[i + (j * dim)])
		{
			k = 1;
			while ((j + k) < dim && sol[i + ((j + k) * dim)])
			{
				if (sol[i + (j * dim)] == sol[i + ((j + k) * dim)])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}
