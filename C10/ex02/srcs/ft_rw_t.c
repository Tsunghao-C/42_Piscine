/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rw_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:08:40 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:08:41 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_rw_t(char *buff, int fd_out, int fd_in, int tail_size)
{
	int		nu_rd;
	char	buff_temp[BUFF];

	nu_rd = 1;
	while (nu_rd > 0)
	{
		nu_rd = read(fd_in, buff_temp, BUFF);
		if (nu_rd == -1)
		{
			ft_print_err2(errno);
			return ;
		}
		if (nu_rd >= tail_size)
			ft_strcpy_tail(buff, buff_temp, tail_size, nu_rd);
		else
			ft_strcat_tail(buff, buff_temp, tail_size, nu_rd);
	}
	if (write(fd_out, buff, tail_size) != tail_size)
	{
		ft_print_err2(errno);
		return ;
	}
	return ;
}
