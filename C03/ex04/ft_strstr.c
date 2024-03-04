/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:55:01 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 10:33:12 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		while ((j < ft_strlen(to_find)) && (str[i + j] == to_find[j]))
			j++;
		if (j == ft_strlen(to_find))
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	//char	str1[] = "Geeks for Geekies OIPOIUKJHBJHnjsdbflaksjbdf fore?";
	char	str1[] = "KLKKLKSE for LKKWJ<M><NK%^&*(J";
	//char	str1[] = "";
	char	str2[] = "for";
	//char	str2[] = "";

	printf("Str test: %s\n", ft_strstr(str1, str2));
	printf("Str real: %s\n", strstr(str1, str2));
	return (0);
}*/
