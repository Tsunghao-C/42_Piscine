/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:34:26 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 15:42:02 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	row_diag_check(char *tab, char c)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 1;
		while (tab[i + j])
		{
			if (tab[i] == tab[i + j])
				return (0);
			if ((tab[i] - tab[i + j]) == j
				|| (tab[i] - tab[i + j] == (-1) * j))
				return (0);
			j++;
		}
		if (tab[i] == c
			|| ((tab[i] - c) == j || (tab[i] - c) == (-1) * j))
			return (0);
		i++;
	}
	return (1);
}

int	solve(char *arr, int n, int col, int *count)
{
	char	num;

	num = '0';
	if (col >= n)
	{
		ft_putstr(arr);
		*count += 1;
		return (1);
	}
	while ((num - 48) < n)
	{
		if (row_diag_check(arr, num) == 1)
		{
			arr[col] = num;
			solve(arr, n, (col + 1), count);
			arr[col] = '\0';
		}
		num++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	char	arr[11];
	int		i;
	int		n;
	int		count;

	i = 0;
	n = 10;
	count = 0;
	while (i < 11)
	{
		arr[i] = '\0';
		i++;
	}
	solve(arr, n, 0, &count);
	return (count);
}
/*
int	main(void)
{
	printf("Number of 10 queen solutions are: %d\n", ft_ten_queens_puzzle());
	return (0);
}*/
