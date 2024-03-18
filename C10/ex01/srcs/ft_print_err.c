/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:03:36 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:03:39 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_err(char *av_name, int err)
{
	ft_putstr_err(P_NAME);
	write(ER, ": ", 2);
	ft_putstr_err(av_name);
	write(ER, ": ", 2);
	ft_putstr_err(strerror(err));
	write(ER, "\n", 1);
	return ;
}

void	ft_print_err2(int err)
{
	ft_putstr(P_NAME);
	write(ER, ": ", 2);
	ft_putstr_err(strerror(err));
	write(ER, "\n", 1);
	return ;
}
