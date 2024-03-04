/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:51:14 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 17:12:57 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	size = (max - min);
	if (i >= size)
		return (0);
	arr = (int *)malloc((size) * sizeof(int));
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = (min + i);
		i++;
	}
	return (arr);
}
/*
int	main(int ac, char *av[])
{
	int	*arr;

	if (ac < 3)
		return (0);
	arr = ft_range(atoi(av[1]), atoi(av[2]));
	if (!arr)
		return (0);
	printf("Arr between %d and %d is :\n", atoi(av[1]), atoi(av[2]));
	for (int i = 0; i < (atoi(av[2]) - atoi(av[1])); i++)
	{
		printf("%d ", arr[i]);
	}
	free(arr);
	return (0);
}*/
