/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rw.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:04:00 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:04:02 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_rw(char *buff, int fd_out, int fd_in)
{
	int	nu_rd;
	int	nu_wr;

	nu_rd = 1;
	while (nu_rd > 0)
	{
		nu_rd = read(fd_in, buff, sizeof(buff));
		if (nu_rd == -1)
		{
			ft_print_err2(errno);
			return ;
		}
		nu_wr = write(fd_out, buff, nu_rd);
		if (nu_wr != nu_rd)
		{
			ft_print_err2(errno);
			return ;
		}
	}
	return ;
}
