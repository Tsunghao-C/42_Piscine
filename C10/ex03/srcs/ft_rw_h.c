/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rw_h.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:50:46 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:50:51 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_rw_h(char *buff, int fd_out, int fd_in, int *wc)
{
	int		nu_rd;
	int		cnt;
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
		cnt = 0;
		while ((nu_rd + ft_strlen(buff) - cnt) >= HEX_SIZE)
		{
			ft_strcat_head(buff, buff_temp, &cnt);
			ft_print_memory(buff, HEX_SIZE, fd_out, wc);
			ft_clear_buff(buff, HEX_SIZE);
		}
		if (nu_rd != 0)
			ft_strncat_head(buff, buff_temp, &cnt, (nu_rd - cnt));
	}
	return ;
}
