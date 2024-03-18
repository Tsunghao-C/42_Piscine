/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:27:35 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:28:42 by tsuchen          ###   ########.fr       */
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

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *begin_list;
	*begin_list = ft_list_last(*begin_list);
	while (tmp1->next)
	{
		tmp2 = tmp1;
		while (tmp2)
		{
			if ((tmp2->next)->next == NULL)
			{
				(tmp2->next)->next = tmp2;
				tmp2->next = NULL;
			}
			tmp2 = tmp2->next;
		}
	}
}
/*
void	ft_list_push_back(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*lst;
	int	tab[4] = {1, 2, 3, 4};
	int	i = 0;
	t_list	*tmp1;
	t_list	*tmp2;

	lst = ft_create_elem((tab + 0));
	while (++i < 4)
		ft_list_push_back(&lst, (tab + i));
	printf("==>  original list  <==\n");
	tmp1 = lst;
	for (int j = 0; j < 4; j++)
	{
		printf("%d item is: %d, ad: %p\n", j, *(int *)tmp1->data, tmp1);
		tmp1 = tmp1->next;
	}
	printf("==>  reversed list  <==\n");
	ft_list_reverse(&lst);
	tmp2 = lst;
	for (int k = 0; k < 4; k++)
	{
		printf("%d item is: %d, ad: %p\n", k, *(int *)tmp2->data, tmp2);
		tmp2 = tmp2->next;
	}
	return (0);
}*/
/*
var	| tab | t[0]| t[1]| t[2]| t[3]|
val	| 0x2 |  1  |  2  |  3  |  4  |
add	| 0x1 | 0x2 | 0x6 | 0xa | 0xe |
ptr	| tab | t+0 | t+1 | t+2 | t+3 |
*/
