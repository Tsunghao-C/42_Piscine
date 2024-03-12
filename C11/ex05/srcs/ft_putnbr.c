/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:26:57 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/19 09:58:52 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr2;

	nbr2 = (long)nb;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	if (nbr2 >= 10)
		ft_putnbr((nbr2 / 10));
	ft_putchar((nbr2 % 10) + '0');
	return ;
}

void	ft_output(int nb)
{
	ft_putnbr(nb);
	write(1, "\n", 1);
}
