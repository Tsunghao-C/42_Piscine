/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:25:14 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 13:37:44 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h" 

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

char	*ft_remove_parced_data(char *buff)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(buff);
	printf("in remove parsed, strlen is: %d\n", len);
	i = (len - 1);
	j = 0;
	while (buff[i] != '\n')
		i --;
	while (j < (len - (i + 1)))
	{
		buff[j] = buff[j + i + 1];
		j++;
	}
	while (j < len)
		buff[j] = '\0';
	printf("buff after removed is: %s\n", buff);
	return (buff);
}
