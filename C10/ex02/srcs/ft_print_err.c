/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:06:31 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:06:34 by tsuchen          ###   ########.fr       */
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
	ft_putstr_err(P_NAME);
	write(ER, ": ", 2);
	ft_putstr_err(strerror(err));
	write(ER, "\n", 1);
	return ;
}

void	ft_print_err3(char *av_name, int err)
{
	ft_putstr_err(P_NAME);
	write(ER, ": illegal offset -- ", 20);
	ft_putstr_err(av_name);
	write(ER, ": ", 2);
	ft_putstr_err(strerror(err));
	write(ER, "\n", 1);
	return ;
}

void	ft_print_err4(char *av_name)
{
	ft_putstr_err(P_NAME);
	write(ER, ": invalid option -- ", 20);
	ft_putstr_err(av_name);
	write(ER, "\nusage: ", 8);
	ft_putstr_err(P_NAME);
	write(ER, " [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n", 53);
	return ;
}
