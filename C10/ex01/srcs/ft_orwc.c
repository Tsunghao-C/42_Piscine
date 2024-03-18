/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orwc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:03:12 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:03:17 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_orwc(char *path, char *buff, int fd_out)
{
	int	fd_in;

	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(path, errno);
		return ;
	}
	ft_rw(buff, fd_out, fd_in);
	close(fd_in);
}
