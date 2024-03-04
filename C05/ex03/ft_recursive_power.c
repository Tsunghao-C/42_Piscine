/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:04:21 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/19 21:37:41 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
		return ((nb * ft_recursive_power(nb, power - 1)));
	else
		return (0);
}
/*
int	main(int ac, char *av[])
{
	printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
