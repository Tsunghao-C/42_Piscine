/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:34:17 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 09:42:07 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "dd&&&dealy";
	//str1 = "";
	str2 = "";
	//str2 = "dd&&&eally asdfjasdkjflkwejblmnb";
	//str3 = "dd&&&deally";
	str3 = "";
	printf("s1 to s2, test: %d\n", ft_strcmp(str1, str2));
	printf("s1 to s2, real: %d\n", strcmp(str1, str2));
	printf("s1 to s3, test: %d\n", ft_strcmp(str1, str3));
	printf("s1 to s3, real: %d\n", strcmp(str1, str3));
	printf("s2 to s3, test: %d\n", ft_strcmp(str2, str3));
	printf("s1 to s2, real: %d\n", strcmp(str2, str3));
	return (0);
}
*/
