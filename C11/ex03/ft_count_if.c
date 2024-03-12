#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count += 1;
		i++;
	}
	return (count);
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

int	is_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
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
	int	count_a;
	int	i;

	if (ac != 3)
		return (0);
	i = 0;
	tab = ft_split(av[1], av[2]);
	count_a = ft_count_if(tab, ft_arr_len(tab), &is_a);
	printf("%d of words include 'a'\n", count_a);
	while (i < ft_arr_len(tab))
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
