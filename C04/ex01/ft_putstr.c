/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:29:42 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 13:25:37 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
/*
int	main(void)
{
	char	str1[15] = "Test printing.";
	char	str2[4] = "123";
	char	str3[2] = "n";

	ft_putstr(str1);
	printf("\n");
	ft_putstr(str2);
	printf("\n");
	ft_putstr(str3);
	printf("\nadd of str1: %p\n", &str1);
	printf("add of str2: %p\n", &str2);
	printf("add of str3: %p\n", &str3);
	return (0);
}
*/
