/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:28:59 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:30:33 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int	a;
	int	b;
	int	c;

	str1 = "SKDI )(*^%(-dd22";
	str2 = "";
	str3 = "\n\b\t\a\f";
	a = ft_str_is_printable(str1);
	b = ft_str_is_printable(str2);
	c = ft_str_is_printable(str3);
	printf("Target output 1, actual output: %d\n", a);
	printf("Target output 1, actual output: %d\n", b);
	printf("Target output 0, actual output: %d\n", c);
	return (0);
}
*/
