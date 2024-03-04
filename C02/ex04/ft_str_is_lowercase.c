/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:33:52 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:28:57 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str1 = "hello";
	char *str2 = "dk,eKK873";
	char *str3 = "";

	int	a;
	int	b;
	int	c;
	a = ft_str_is_lowercase(str1);
	b = ft_str_is_lowercase(str2);
	c = ft_str_is_lowercase(str3);
	printf("Target output 1, actuacl output is: %d\n", a);
	printf("Target output 0, actuacl output is: %d\n", b);
	printf("Target output 1, actuacl output is: %d\n", c);
	return (0);
}
*/
