/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:22:18 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/19 15:58:22 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			return (0);
		while (str[i + j])
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_isblank(char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
		|| str == '\r' || str == '\t' || str == '\v')
		return (1);
	return (0);
}

int	ft_is_in_base(char *str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (*str == base[i])
			return ((i));
		i++;
	}
	return ((-1));
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		base_len;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	base_len = ft_base_check(base);
	if (base_len == 0)
		return (0);
	while (ft_isblank(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (ft_is_in_base(&str[i], base) >= 0)
	{
		num = ((num * base_len) + ft_is_in_base(&str[i], base));
		i++;
	}
	return ((num * sign));
}
/*
int	main()
{
	printf("%d\n", ft_atoi_base("\t   --+-+00033.dj3", "9"));
	printf("%d\n", ft_atoi_base("   --+-+AAA33.dj3", "A12345"));
	printf("%d\n", ft_atoi_base("  \v --+-+33.dj3", ""));
	printf("%d\n", ft_atoi_base("  \r --+-+80000000.dj3", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("   --+-+AAA241872487.dj3", "A01234567A89"));
	return (0);
}*/
