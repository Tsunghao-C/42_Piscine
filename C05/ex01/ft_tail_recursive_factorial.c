/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:44:44 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/19 18:47:42 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	tail_recurs_factorial(int nb, int output)
{
	if (nb == 1)
		return (output);
	else
		return (tail_recurs_factorial((nb - 1), (output * nb)));
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb > 1)
		return (tail_recurs_factorial(nb, 1));
	else
		return (0);
}
/*
int     main(int ac, char *av[])
{
        if (ac < 2)
                return (0);
        printf("%d\n", ft_recursive_factorial(atoi(av[1])));
        return (0);
}*/
