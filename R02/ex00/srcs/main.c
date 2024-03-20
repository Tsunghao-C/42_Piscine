/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:03:47 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 15:39:33 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	t_list	*begin_dic;

	if (ac < 1 || ac > 3)
	{
		write(ER, "Error\n", 6);
		return (0);
	}
	begin_dic = ft_set_reference_dic(ac, av);
	if (!begin_dic)
	{
		write(ER, "Dict Error\n", 11);
		return (0);
	}
	if (ac == 1)
		ft_rw(STDIN_FILENO, begin_dic);
	else if (ft_input_check(av[(ac - 1)]) == 0)
	{
		write(ER, "Error\n", 6);
		return (0);
	}
	else
		ft_write_number(av[(ac - 1)], begin_dic);
	write(1, "\n", 1);
	ft_list_clear(begin_dic, &free_data);
	return (0);
}
