/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:07:09 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:07:10 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcat_tail(char *buff, char *buff_temp, int tail_size, int nu_rd)
{
	int	i;
	int	gap;

	i = 0;
	gap = (ft_strlen(buff) + nu_rd - tail_size);
	if (gap > 0)
	{
		while (i < (tail_size - nu_rd))
		{
			buff[i] = buff[i + gap];
			i++;
		}
		buff[i] = '\0';
	}
	ft_strncat(buff, buff_temp, nu_rd);
	return (buff);
}
