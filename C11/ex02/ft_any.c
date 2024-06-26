/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:59:28 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:03:55 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) < 0)
			return (1);
		i++;
	}
	return (0);
}
/*
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
	output[0] = NULL;
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

int	is_comma(char *str)
{
	while (*str)
	{
		if (*str == ',')
			return (-1);
		str++;
	}
	return (1);
}

int	ft_arr_len(char **arr)
{
	int	i = 0;

	while (arr[i])
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	char	**tab;
	int	any;
	int	i;

	if (ac != 3)
		return (0);
	i = 0;
	tab = ft_split(av[1], av[2]);
	any = ft_any(tab, &is_comma);
	if (any == 1)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	while (i < ft_arr_len(tab))
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
