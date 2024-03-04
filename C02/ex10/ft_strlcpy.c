/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:35:53 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/19 11:44:34 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while ((i < (size - 1)) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
#include <bsd/string.h>

int	main(void)
{
	char	*src;
	char	dest[20];
	char	real_dest[100];
	int	a;
	int	real;

	src = "28HLKJHGVLJH<MN<J(**&^%*&^(M<M>Bsd";
	printf("str : %s\n", src);
	a = ft_strlcpy(dest, src, 10);
	real = strlcpy(real_dest, src, 10);
	printf("dest: %s - %d\n", dest, a);
	printf("real: %s - %d\n", real_dest, real);
	return (0);
}
*/
