/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:09:19 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 10:24:29 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (j < nb && src[j])
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
        char    src[8] = " Sanlye";
        char    dest_t[7] = "Abe";
        char    dest_r[7] = "Abe";

        printf("src: %s; dest: %s\n", src, dest_t);
        printf("cat_test: %s\n", ft_strncat(dest_t, src, 3));
        printf("cat_real: %s\n", strncat(dest_r, src, 3));
        return (0);
}
*/
