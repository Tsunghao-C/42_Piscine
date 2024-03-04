/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:09:31 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/20 17:16:13 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || (str[i] >=9 && str[i] <= 13))
			return (0);
		while (str[i + j])
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	text(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nbr2;

	base_len = ft_base_check(base);
	nbr2 = (long)nbr;
	if (base_len ==  0)
		return ;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 *= (-1);
	}
	if (nbr2 >= base_len)
		ft_putnbr_base((nbr2 / base_len), base);
	text(base[(nbr2 % base_len)]);
	return ;
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "Incorrect input", 15);
		return (0);
	}
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	write(1, "\n", 1);
	return (0);
}*/
