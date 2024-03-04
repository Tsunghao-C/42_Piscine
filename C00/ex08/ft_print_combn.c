/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:09:09 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/29 11:21:08 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}

int		ft_digit_check(char *arr, char num, int digit)
{
	if (digit == 0)
		return (1);
	if (num > arr[digit - 1])
		return (1);
	return (0);
}

void	solve(char *arr, int digit, int n, int *count)
{
	char	num;

	num = '0';
	if (digit >= n)
	{
		if (*count != 0)
			write(1, ", ", 2);
		ft_putstr(arr);
		*count += 1;
		return ;
	}
	while ((num - 48) < 10)
	{
		if (ft_digit_check(arr, num, digit) == 1)
		{
			arr[digit] = num;
			solve(arr, (digit + 1), n, count);
			arr[digit] = '\0';
		}
		num++;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int		i;
	char	arr[11];
	int		count;

	i = 0;
	count = 0;
	while (i < 11)
	{
		arr[i] = '\0';
		i++;
	}
	solve(arr, 0, n, &count);
	return ;
}
/*
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac < 2)
		return (0);
	ft_print_combn(atoi(av[1]));
	return (0);
}*/
