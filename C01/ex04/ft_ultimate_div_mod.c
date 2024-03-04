/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:32:16 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/10 20:27:52 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	val_a;
	int	val_b;

	val_a = *a;
	val_b = *b;
	*a = val_a / val_b;
	*b = val_a % val_b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Output a after div_mod: %d\n", a);
	printf("output b after div_mod: %d\n", b);
	return (0);
}
*/
