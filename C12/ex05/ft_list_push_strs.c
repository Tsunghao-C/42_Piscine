/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:24:25 by tsuchen           #+#    #+#             */
/*   Updated: 2024/06/18 17:59:55 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*lst;
	t_list	*temp;

	i = 0;
	lst = NULL;
	temp = NULL;
	while (i < size)
	{
		if (lst)
			temp = lst;
		lst = ft_create_elem(strs[i]);
		if (!lst)
			return (NULL);
		if (temp)
			lst->next = temp;
		i++;
	}
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[7] = {"I", "am", "a", "list", "of", "strings", "!"};
	int	size = 7;
	t_list	*str_list;
	t_list	*tmp;

	str_list = ft_list_push_strs(size, strs);
	tmp = str_list;
	while (tmp)
	{
		printf("list: %s\n", (char *)(tmp->data));
		tmp = tmp->next;
	}
	while (str_list)
	{
		tmp = str_list;
		str_list = str_list->next;
		free(tmp);
	}
	return (0);
}*/
