/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:23:16 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:23:21 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last;

	last = begin_list;
	while (last != NULL)
	{
		if ((*last).next == NULL)
			return (last);
		last = (*last).next;
	}
	return (last);
}
/*
void    ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*lst;
	t_list	*last;
	int	a = 3;
	int	b = 4;
	int	i = 0;

	lst = ft_create_elem(&a);
	while (i < 10)
	{
		ft_list_push_front(&lst, &b);
		i++;
	}
	last = ft_list_last(lst);
	printf("value of last list is: %d\n", *(int *)(*last).data);
	return (0);
}*/
