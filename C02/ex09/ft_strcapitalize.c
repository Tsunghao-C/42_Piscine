/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:19:09 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/13 16:18:38 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_alpha_numeric(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i + 1] != '\0')
	{
		if (is_alpha_numeric(str[i]) == 1)
		{
			if ((str[i + 1] >= 'A') && (str[i + 1] <= 'Z'))
				str[i + 1] += 32;
		}
		else
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
/*
char    *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str1[100];
	ft_strcpy(str1, "asdfSFSFAF 45sdf sdf324");
	printf("Before cap: %s\n", str1);
	printf("After cap: %s\n", ft_strcapitalize(str1));
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
