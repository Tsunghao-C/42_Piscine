/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_fd_out.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:06:20 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:06:22 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_set_fd_out(int ac, char *av[])
{
	int	i;
	int	fd_out;

	fd_out = STDOUT_FILENO;
	i = 0;
	while (++i < ac)
	{
		if (ft_strcmp(av[i], ">") == 0)
		{
			fd_out = open(av[i + 1], O_WRONLY | O_CREAT, 0777);
			if (fd_out == -1)
			{
				ft_putstr_err(strerror(errno));
				write(ER, "\n", 1);
				return (0);
			}
		}
	}
	return (fd_out);
}
