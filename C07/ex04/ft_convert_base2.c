/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:26:36 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 11:45:43 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(char *str)
{
	if (*str == ' ' || (*str >= 9 && *str <= 13))
		return (1);
	return (0);
}

int	ft_base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		if (ft_isblank(&str[i]) == 1)
			return (0);
		while (str[i + j])
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
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

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		base_len;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	base_len = ft_base_check(base);
	if (base_len < 2)
		return (0);
	while (ft_isblank(&str[i]) == 1)
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

char	*ft_strcat_char(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
	return (dest);
}
