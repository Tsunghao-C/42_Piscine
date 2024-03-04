/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:11:48 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/26 17:14:13 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(src);
	dup = (char *)malloc((n + 1) * sizeof(char));
	if (!dup)
		return (0);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "Source";
	char	*dup_t;
	char	*dup_r;

	dup_t = ft_strdup(src);
	if (!dup_t)
		return (0);
	dup_r = strdup(src);
	if (!dup_r)
		return (0);
	printf("Duplicate test: %s\n", dup_t);
	printf("Duplicate real: %s\n", dup_r);
	free(dup_t);
	free(dup_r);
	return (0);
}*/
