/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:22:18 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 12:28:18 by tsuchen          ###   ########.fr       */
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
/*
#include <string.h>
int	main(void)
{
	char	str1[20] = "Test how many?";
	char	str2[20] = "";
	char	str3[16] = "this one explode";

	printf("len str1, test: %d; real: %ld\n", ft_strlen(str1), strlen(str1));
	printf("len str2, test: %d; real: %ld\n", ft_strlen(str2), strlen(str2));
	printf("len str3, test: %d; real: %ld\n", ft_strlen(str3), strlen(str3));
	return (0);
}
*/
