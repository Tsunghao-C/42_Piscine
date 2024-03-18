/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:36:01 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 18:34:39 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	int	dim;
	int	count;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dim = ft_input_check(av[1]);
	count = 0;
	if (dim != 0)
		ft_solve_tower(av[1], dim, &count);
	if (count == 0)
		write(1, "Error\n", 6);
	return (0);
}
