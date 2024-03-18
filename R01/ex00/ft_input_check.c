/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hao <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:42:09 by Hao               #+#    #+#             */
/*   Updated: 2024/03/18 17:40:38 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_non_zero_number(char c)
{
	if (c >= '1' && c <= '9')
		return (1);
	return (0);
}

int	ft_input_value_check(char *input, int dim)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (((i % 2) == 1) && (input[i] != ' '))
			return (0);
		if ((i % 2) == 0)
		{
			if (ft_is_non_zero_number(input[i]) == 0)
				return (0);
			if ((input[i] - '0') > dim)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_input_check(char *input)
{
	int	dim;
	int	input_num;

	if (ft_strlen(input) % 2 == 0)
		return (0);
	input_num = ((ft_strlen(input) + 1) / 2);
	if ((input_num % 4) != 0)
		return (0);
	dim = (input_num / 4);
	if (dim < 1 || dim > 9)
		return (0);
	if (ft_input_value_check(input, dim) == 0)
		return (0);
	return (dim);
}
