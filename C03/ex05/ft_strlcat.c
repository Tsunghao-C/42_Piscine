/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:31:46 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/15 20:57:53 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	in_dest_len;

	i = 0;
	in_dest_len = ft_strlen(dest);
	if (size < (in_dest_len + 1))
		return (ft_strlen(src) + size);
	while (src[i] && i < (size - in_dest_len - 1))
	{
		dest[i + in_dest_len] = src[i];
		i++;
	}
	dest[i + in_dest_len] = '\0';
	if (in_dest_len < size)
		return (ft_strlen(src) + in_dest_len);
	else
		return (ft_strlen(src) + size);
}
/*
#include <bsd/string.h>
int	main(void)
{
	char	src[10] = "123456789";
	char	dest_test[10] = "hello";
	char	dest_real[10] = "hello";

	printf("test: %u\n", ft_strlcat(dest_test, src, 7));
	printf("test text: %s\n", dest_test);
	printf("real: %zu\n", strlcat(dest_real, src, 7));
	printf("test real: %s\n", dest_real);
	return (0);
}
*/
