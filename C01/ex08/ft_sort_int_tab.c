/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:35:53 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/10 20:33:42 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < size)
	{
		while ((j + 1) < size)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		j = 0;
		i++;
	}
}
/*
int	main(void)
{
	int	arr[6];

	arr[0] = 42;
	arr[1] = 9;
	arr[2] = 34;
	arr[3] = 17;
	arr[4] = 22;
	arr[5] = 1;
	printf("Array before sort:");
	for (int i = 0; i < 6; i++){
		printf("%d, ", arr[i]);
	}
	ft_sort_int_tab(arr, 6);
	printf("\nArray after sort:");
	for (int j = 0; j < 6; j++){
		printf("%d, ", arr[j]);
	}
}
*/
