/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:40:41 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/27 19:46:12 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = (max - min);
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*range;
	int	min = -8;
	int	max = 4;
	int	size;

	size = ft_ultimate_range(&range, min, max);
	//if (!range)
	//	return (0);
	printf("Size of range is: %d\n", size);
	printf("Array is :");
	for (int i = 0; i < (max - min); i++)
		printf(" %d", range[i]);
	printf("\n");
	free(range);
	return (0);
}*/
