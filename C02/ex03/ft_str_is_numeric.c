/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:16:25 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:28:06 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int	a;
	int	b;

	str1 = "23798769";
	str2 = "234*^&345";
	a = ft_str_is_numeric(str1);
	b = ft_str_is_numeric(str2);
	printf("str1 is: %d\n", a);
	printf("str2 is: %d\n", b);
	return (0);
}
*/
