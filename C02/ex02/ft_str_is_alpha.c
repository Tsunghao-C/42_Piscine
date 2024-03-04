/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:49:18 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:27:12 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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
	int	a;
	int	b;
	char	*str1;
	char	*str2;

	str1 = "Welcome";
	str2 = "Welcome42";
	a = ft_str_is_alpha(str1);
	b = ft_str_is_alpha(str2);
	printf("Str 1 is: %d\n", a);
	printf("Str 2 is: %d\n", b);
	return (0);
}
*/
