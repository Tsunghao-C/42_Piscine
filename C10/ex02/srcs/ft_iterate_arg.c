/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterate_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:06:11 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:45:35 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_iterate_arg(int ac, char *av[], int fd_out, int t_size)
{
	int		i;
	int		j;
	int		count;

	i = 2;
	j = ft_count_inputs(av);
	count = 0;
	if (ac == 3 || ft_strcmp(av[3], ">") == 0)
		ft_orwc_t1(STDIN_FILENO, fd_out, t_size);
	while (++i < ac)
	{
		if (ft_strcmp(av[i], ">") == 0)
			return ;
		else if (j > 4)
			ft_orwc_t3(av[i], fd_out, t_size, &count);
		else
			ft_orwc_t2(av[i], fd_out, t_size);
	}
	return ;
}
