/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:00:29 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/21 11:56:28 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	float	sq_f;

	sq_f = 1;
	if (nb == 0)
		return (0);
	while (sq_f <= ((sq_f + (nb / sq_f)) / 2))
	{
		if (sq_f == ((sq_f + (nb / sq_f)) / 2))
			return (sq_f);
		sq_f++;
	}
	return (sq_f);
}

int	ft_is_prime(int nb)
{
	int	root;
	int	fac;

	fac = 2;
	root = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (fac <= root)
	{
		if ((nb % fac) == 0)
			return (0);
		fac++;
	}
	return (1);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%d prime check is %d\n", atoi(av[1]), ft_is_prime(atoi(av[1])));
	return (0);
}
*/
