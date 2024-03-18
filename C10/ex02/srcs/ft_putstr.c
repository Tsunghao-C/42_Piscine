/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:41:15 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 10:45:31 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putstr_err(char *str)
{
	while (*str)
		write(ER, str++, 1);
}

void	ft_putstr_header(char *path, int fd_out, int *count)
{
	if (*count > 0)
		write(fd_out, "\n", 1);
	write(fd_out, "==> ", 4);
	while (*path)
		write(fd_out, path++, 1);
	write(fd_out, " <==\n", 5);
	*count += 1;
}
