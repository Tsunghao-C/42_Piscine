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

#include <unistd.h>
#include <stdio.h>

void	text(int c)
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
	text((nbr2 % 10) + 48);
	return ;
}
/*
int	main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(-4577);
	printf("\n");
	ft_putnbr(206546466);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	return (0);
}*/
