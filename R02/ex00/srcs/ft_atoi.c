/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:26:43 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 16:44:34 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
	if (str[i] == '+' || str[i] == '-')
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

int	ft_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

char	*ft_itoa(int nbr)
{
	int		size;
	int		i;
	char	*str;

	size = 0;
	i = nbr;
	while (i > 0)
	{
		size++;
		i /= 10;
	}
	if (nbr == 0)
		size = 1;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = (nbr / ft_power(10, (size - 1 - i))) + '0';
		nbr %= ft_power(10, (size - 1 - i));
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa_power(int dgt)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)malloc((dgt + 2) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '1';
	while (i <= dgt)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
