/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:08:03 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:08:05 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcpy_tail(char *buff, char *buff_temp, int tail_size, int nu_rd)
{
	int	i;
	int	start;

	i = 0;
	start = nu_rd - tail_size;
	while (i < tail_size)
	{
		buff[i] = buff_temp[i + start];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
