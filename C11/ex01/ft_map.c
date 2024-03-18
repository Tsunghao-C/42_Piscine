/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:58:47 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:03:39 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_tab;

	i = 0;
	new_tab = (int *)malloc(length * sizeof(int));
	if (!new_tab)
		return (0);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
/*
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

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

int	mul_by_two(int nb)
{
	return (nb * 2);
}

int	main(int ac, char *av[])
{
	int	*tab;
	int	*map;
	int	length;

	tab = ft_range(atoi(av[1]), atoi(av[2]));
	if (!tab)
		return (0);
	length = (atoi(av[2]) - atoi(av[1]));
	if (length < 0)
		length *= (-1);
	map = ft_map(tab, (length + 1), &mul_by_two);
	if (!map)
		return (0);
	write(1, "before mapping: ", 16);
	ft_foreach(tab, (length + 1), &ft_putnbr);
	write(1, "\nafter mapping: ", 16);
	ft_foreach(map, (length + 1), &ft_putnbr);
	write(1, "\n", 1);
	free(tab);
	free(map);
	return (0);
}*/
