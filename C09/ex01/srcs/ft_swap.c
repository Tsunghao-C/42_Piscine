/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:48:04 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/10 19:13:16 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	val_a;
	int	val_b;

	val_a = *a;
	val_b = *b;
	*a = val_b;
	*b = val_a;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("(a, b) value before swap: (%d, %d)\n", a, b);
	ft_swap(&a, &b);
	printf("(a, b) value after swap: (%d, %d)\n", a, b);
	return (0);
}
*/
