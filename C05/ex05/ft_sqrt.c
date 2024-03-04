/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:05:07 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/21 11:18:29 by tsuchen          ###   ########.fr       */
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
	return (0);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
