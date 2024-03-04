/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:25:14 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 10:20:56 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char	src[8] = " Sanlye";
	char	dest_t[16] = "A";
	char	dest_r[16] = "A";
	
	printf("src: %s; dest: %s\n", src, dest_t);
	printf("cat_test : %s\n", ft_strcat(dest_t, src));
	printf("cat_real : %s\n", strcat(dest_r, src));
	return (0);
}
*/
