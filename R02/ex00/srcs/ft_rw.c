/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rw.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:04:00 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 16:45:15 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_rw(int fd_in, t_list *begin_dic)
{
	int		nu_rd;
	char	buff[BUFF];
	char	*num;

	ft_clear_buff(buff);
	nu_rd = read(fd_in, buff, sizeof(buff));
	if (nu_rd == -1)
	{
		ft_print_err2(errno);
		return ;
	}
	num = (char *)malloc(nu_rd * sizeof(char));
	if (!num)
		return ;
	ft_strlcpy(num, buff, nu_rd);
	if (ft_input_check(num) == 0)
	{
		write(ER, "Error\n", 6);
		return ;
	}
	ft_write_number(num, begin_dic);
	return ;
}
