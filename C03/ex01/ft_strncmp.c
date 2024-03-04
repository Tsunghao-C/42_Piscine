/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:44:29 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 15:20:06 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while ((i < (n - 1)) && (s1[i] || s2[i]) && (s1[i] == s2[i]))
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	unsigned int	n = 0;
	//str1 = "Are they really the same? ";
	str1 = "";
	str2 = "";
	//str2 = "Are they really the same? \n";
	printf("test: %d\n",ft_strncmp(str1, str2, n));
	printf("real: %d\n", strncmp(str1, str2, n));
	return (0);
}
*/
