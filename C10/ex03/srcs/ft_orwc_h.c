/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orwc_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:49:47 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:49:49 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_orwc_h2(char *buff, char *path, int fd_out, int *wc)
{
	int		fd_in;

	fd_in = open(path, O_RDONLY);
	if (fd_in == -1)
	{
		ft_print_err(path, errno);
		return ;
	}
	ft_rw_h(buff, fd_out, fd_in, wc);
	close(fd_in);
}
