/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:10:58 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/11 11:52:44 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	l;
	char	*str;
	int	i = 0;

	str = "Laugh";
	l = ft_strlen(str);
	printf("Length = %d\n", l);
	
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}

	return (0);
}
*/
