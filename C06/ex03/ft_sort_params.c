/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:48:20 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/21 18:52:07 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_av(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		while (*av[i])
			write(1, av[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < ac - 1)
	{
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		j = 1;
		i++;
	}
	ft_print_av(ac, av);
	return (0);
}
