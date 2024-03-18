/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_n_dsp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:01:58 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:02:15 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_read_n_dsp(int fd)
{
	char	buff[BUFF_SIZE];
	int		num_read;

	num_read = 1;
	while (num_read > 0)
	{
		num_read = read(fd, buff, sizeof(buff));
		if (num_read == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return ;
		}
		write(1, buff, num_read);
	}
}
