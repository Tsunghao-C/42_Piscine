/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:26:43 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 22:55:03 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isblank(char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isblank(&str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = ((num * 10) + (str[i] - 48));
		i++;
	}
	return ((num * sign));
}
/*
int	main(void)
{
	char	str_1[30] = " \t\n  ---+--+1234ab567";
	char	str_2[30] = "  +--++017540074*.3";
	char	str_3[30] = "++++-09.1320";

	printf("str_1: %d\n", ft_atoi(str_1));
	printf("str_2: %d\n", ft_atoi(str_2));
	printf("str_3: %d\n", ft_atoi(str_3));
	return (0);
}
*/
