/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:44:39 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:29:41 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "HELLO";
	char	*str2 = "HELLO ";
	char	*str3 = "HELLOd*&^2";
	char	*str4 = "";
	int	a;
	int	b;
	int	c;
	int	d;

	a = ft_str_is_uppercase(str1);
	b = ft_str_is_uppercase(str2);
	c = ft_str_is_uppercase(str3);
	d = ft_str_is_uppercase(str4);
	printf("Target output 1, actuacl output is: %d\n", a);
	printf("Target output 0, actuacl output is: %d\n", b);
	printf("Target output 0, actuacl output is: %d\n", c);
	printf("Target output 1, actuacl output is: %d\n", d);
	return (0);
}
*/
