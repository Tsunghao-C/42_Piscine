/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:03:34 by tsuchen           #+#    #+#             */
/*   Updated: 2024/05/07 13:11:03 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
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

int	ft_count_subset(char *str, char *charset)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset) == 1)
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	if (flag == 1)
		count++;
	return (count);
}

char	*ft_strchop(char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start) * sizeof(char));
	if (!word)
		return (0);
	while ((i + start + 1) < end)
	{
		word[i] = str[i + start + 1];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_fill_words(char *str, char *charset, char **output)
{
	int	i;
	int	j;
	int	anchor;
	int	flag;

	i = 0;
	j = 0;
	anchor = -1;
	flag = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset) == 1)
		{
			if (flag == 1)
				output[j++] = ft_strchop(str, anchor, i);
			flag = 0;
			anchor = i;
		}
		else
			flag = 1;
		i++;
	}
	if (flag == 1)
		output[j++] = ft_strchop(str, anchor, i);
	output[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		subsets;

	subsets = ft_count_subset(str, charset);
	output = (char **)malloc((subsets + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	ft_fill_words(str, charset, output);
	return (output);
}

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char *av[])
{
	char	**split_words;
	int		i;

	if (ac != 3)
	{
		write(1, "Incorrect inputs\n", 17);
		return (0);
	}
	split_words = ft_split(av[1], av[2]);
	i = 0;
	while (split_words[i])
	{
		ft_putstr(split_words[i]);
		i++;
		if (split_words[i])
			write(1, ", ", 2);
	}
	write(1, "\n", 1);
	return (0);
}
