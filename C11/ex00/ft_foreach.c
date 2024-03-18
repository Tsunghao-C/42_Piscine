/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:58:34 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:03:26 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb2;

	nb2 = (long)nb;
	if (nb2 < 0)
	{
		write(1, "-", 1);
		nb2 *= (-1);
	}
	if (nb2 >= 10)
		ft_putnbr(nb2 / 10);
	ft_putchar((nb2 % 10) + '0');
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int	size;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	size = (end - start);
	if (size < 0)
	{
		size *= (-1);
		sign *= (-1);
	}
	tab = (int *)malloc((size + 1) * sizeof(int));
	if (!tab)
		return (0);
	while (i < size + 1)
	{
		tab[i] = start + (i * sign);
		i++;
	}
	return (tab);
}

int	main(int ac, char *av[])
{
	int	*tab;
	int	length;

	tab = ft_range(atoi(av[1]), atoi(av[2]));
	if (!tab)
		return (0);
	length = (atoi(av[2]) - atoi(av[1]));
	if (length < 0)
		length *= (-1);
	ft_foreach(tab, (length + 1), &ft_putnbr);
	free(tab);
	return (0);
}*/
