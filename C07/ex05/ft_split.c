/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:55:11 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:16:12 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_sub_arr_count(char *str, char *charset)
{
	int	i;
	int	anchor;
	int	count;

	i = 0;
	anchor = -1;
	count = 0;
	while (str[i])
	{
		if ((is_sep(str[i], charset) == 1) || (str[i + 1] == '\0'))
		{
			if (((i - anchor) > 1) || (is_sep(str[i], charset) == 0))
				count += 1;
			anchor = i;
		}
		i++;
	}
	return (count);
}

char	*ft_putwords(char *str, int *start, int *end, char *charset)
{
	char	*sub_str;
	int		size;
	int		i;

	i = 0;
	size = (*end - *start);
	if ((!str[*end + 1]) && (is_sep(str[*end], charset) == 0))
		size += 1;
	sub_str = (char *)malloc(size * sizeof(char));
	if (!sub_str)
		return (0);
	while (i < (size - 1))
	{
		sub_str[i] = str[(*start + 1 + i)];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		n_sub;
	int		i;
	int		j;
	int		anchor;

	i = 0;
	j = 0;
	anchor = -1;
	n_sub = ft_sub_arr_count(str, charset);
	output = (char **)malloc((n_sub + 1) * sizeof(char *));
	if (!output)
		return (0);
	while (str[j])
	{
		if ((is_sep(str[j], charset) == 1) || (str[j + 1] == '\0'))
		{
			if (((j - anchor) > 1) || (is_sep(str[j], charset) == 0))
				output[i++] = ft_putwords(str, &anchor, &j, charset);
			anchor = j;
		}
		j++;
	}
	output[i] = 0;
	return (output);
}
/*
int	ft_arr_len(char **arr)
{
	int	i = 0;

	while (arr[i])
		i++;
	return (i);
}

int	main(void)
{
	char	*str = "215askdljfh1234566adjf3215321asdf321a2a2a25aa5ads";
	char	*charset = "0123456789ab";
	char	**output;
	int		arr_len;

	output = ft_split(str, charset);
	arr_len = ft_arr_len(output);
	printf("Original str : %s\n", str);
	printf("Separator str: %s\n", charset);
	printf("arr_len: %d\n", arr_len);
	for (int i = 0; i < arr_len; i++)
		printf("Split str %d is: %s\n", i, output[i]);
	//free memory
	for (int j = 0; j < arr_len; j++)
		free(output[j]);
	free(output);
	return (0);
}*/
