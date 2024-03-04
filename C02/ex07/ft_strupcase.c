/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 17:52:19 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/12 19:31:35 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/* To test the string, we need to create an empty string wiht 
 * defined size, and Need to use strcpy to copy it. Otherwise,
 *  there will be a seg fault!!! */
/* Because by doing str1 = "A string", the str1 is pointed to 
 * "A string" which is certainly in read-only memory. */
/*
char    *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[20];

	ft_strcpy(str1, "Do you understand?");
	printf("%s\n", str1);
	printf("%s\n", ft_strupcase(str1));
	
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
