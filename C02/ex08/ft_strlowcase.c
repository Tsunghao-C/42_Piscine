/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:52:24 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:32:28 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
char    *ft_strcpy(char *dest, char *src);

int     main(void)
{
        char    str1[20];

        ft_strcpy(str1, "Do You UnderStand?");
        printf("%s\n", str1);
        printf("%s\n", ft_strlowcase(str1));

        return (0);
}

char    *ft_strcpy(char *dest, char *src)
{
        unsigned int    i;

        i = 0;
        while (src[i] != '\0'){
                dest[i] = src[i];
                i++;
        }
        return (dest);
}
*/
