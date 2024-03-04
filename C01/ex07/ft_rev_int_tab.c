/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:16:59 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/11 12:00:27 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[(size - 1 - i)];
		tab[(size - 1 - i)] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	num_ar[6] = {24, 11, 65, 34, 42, 88};
	for (int j = 0; j < 6; j++){
		printf("%d, ", num_ar[j]);
	}
	printf("\n");
	for (int k = 0; k < 6; k++){
		printf("%d, ", num_ar[k]+1);
	}
	printf("\n");
	ft_rev_int_tab(num_ar, 6);
	for (int i = 0; i < 6; i++){
		printf("%d, ", num_ar[i]);
	}
	return (0);
}*/
