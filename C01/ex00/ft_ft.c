/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:59:10 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/10 20:21:06 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	a;
	int *p;		//declare a pointer variable

	a = 32;
	p = &a;		//assign address of int variable a to pointer p
	printf("%d\n", a);
	ft_ft(p);	
	//the input of ft_ft is the address, and it changed the value in this address
	printf("%d", a);
}
*/
