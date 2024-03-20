/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:20:44 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/20 19:21:18 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_create_data_n(char *buff, int start, int end)
{
	int		i;
	char	*data_n;

	i = start;
	while (!(buff[i] == ':' || buff[i] == ' ') && i <= end)
		i++;
	data_n = (char *)malloc((i - start + 1) * sizeof(char));
	if (!data_n)
		return (NULL);
	i = 0;
	while (!(buff[i + start] == ':' || buff[i + start] == ' '))
	{
		data_n[i] = buff[i + start];
		i++;
	}
	data_n[i] = '\0';
	return (data_n);
}

char	*ft_create_data_w(char *buff, int start, int end)
{
	int		i;
	int		j;
	char	*data_w;

	i = end;
	while (buff[i] != ':' && i >= start)
		i--;
	i += 1;
	while (buff[i] == ' ' && i <= end)
		i++;
	data_w = (char *)malloc((end - i + 1) * sizeof(char));
	if (!data_w)
		return (NULL);
	j = 0;
	while (buff[i + j] != '\n')
	{
		data_w[j] = buff[i + j];
		j++;
	}
	data_w[j] = '\0';
	return (data_w);
}

t_list	*ft_create_elem(char *buff, int start, int end)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->data_n = ft_create_data_n(buff, start, end);
	lst->data_w = ft_create_data_w(buff, start, end);
	lst->next = NULL;
	return (lst);
}
