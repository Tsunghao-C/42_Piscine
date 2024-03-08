/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:49:52 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/22 19:22:59 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	tail_recurs_fibo(int index, int f1, int output)
{
	if (index == 1)
		return (output);
	else
		return (tail_recurs_fibo((index - 1), output, (output + f1)));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (tail_recurs_fibo(index, 0, 1));
}
/*
int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%dth nbr is: %d\n", atoi(av[1]), ft_fibonacci(atoi(av[1])));
	return (0);
}*/
