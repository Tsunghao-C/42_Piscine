/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 22:12:11 by tsuchen           #+#    #+#             */
/*   Updated: 2024/02/28 19:33:10 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	ft_init_struct(t_stock_str *sptr)
{
	sptr->size = 0;
	sptr->str = 0;
	sptr->copy = 0;
}

void	ft_set_struct(t_stock_str *sptr, char *str)
{
	(*sptr).size = ft_strlen(str);
	(*sptr).str = str;
	(*sptr).copy = ft_strdup(str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*strucs;

	strucs = NULL;
	strucs = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!strucs)
		return (0);
	ft_init_struct(&strucs[0]);
	i = -1;
	while (++i < ac)
		ft_set_struct(&strucs[i], av[i]);
	ft_init_struct(&strucs[i]);
	return (strucs);
}
/*
void    ft_show_tab(struct s_stock_str *par);

int	main(int ac, char **av)
{
	struct s_stock_str	*inputs;

	inputs = ft_strs_to_tab(ac, av);
	if (!inputs)
		return (0);
	ft_show_tab(inputs);
	// free mem
	for (int i = 0; i < ac + 1; i++)
		free(inputs[i].copy);
	free(inputs);
	return (0);
}*/
