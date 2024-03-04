/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:15 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 17:12:32 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_size_counter(int size, char **strs, char *sep)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (i < size)
	{
		if (strs[i])
		{
			n += ft_strlen(strs[i]);
			if (i < size - 1)
				n += ft_strlen(sep);
		}
		i++;
	}
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*scr;
	int		n;
	int		i;

	i = 0;
	n = ft_size_counter(size, strs, sep);
	scr = (char *)malloc((n + 1) * sizeof(char));
	if (!scr)
		return (0);
	scr[i] = '\0';
	while (i < size)
	{
		ft_strcat(scr, strs[i]);
		if (i < size - 1)
			ft_strcat(scr, sep);
		i++;
	}
	return (scr);
}
/*
int	main(void)
{
	char	*strs[6] = {"Hello", "my", "name", "is", "Alex", "Chen"};
	char	*sep = ", ";
	int	size = 6;
	char	*scrip;

	scrip = ft_strjoin(size, strs, sep);
	if (!scrip)
		return (0);
	printf("Joined string is:\n%s\n", scrip);
	free(scrip);
	return (0);
}*/
