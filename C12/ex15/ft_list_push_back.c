/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:24:02 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:24:08 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_list;
	t_list	*tmp;

	new_list = ft_create_elem(data);
	if (!new_list)
		return ;
	tmp = *begin_list;
	while (tmp)
	{
		if ((*tmp).next == NULL)
			break ;
		tmp = (*tmp).next;
	}
	(*tmp).next = new_list;
}
/*
int	main(void)
{
	t_list	*begin_list;
	t_list	*sec_list;
	int	a = 3;
	int	b = 4;
	int	c = 9;
	t_list	*tmp;
	t_list	*tmp2;

	begin_list = ft_create_elem(&c);
	sec_list = ft_create_elem(&b);
	begin_list->next = sec_list;
	tmp = begin_list;
	printf("data	|current add	|next add	|ptr add\n");
	while (tmp)
	{
		printf("%d |%p |%p\n", *(int *)(*tmp).data, tmp, (*tmp).next);
		tmp = (*tmp).next;
	}
	ft_list_push_back(&begin_list, &a);
	tmp2 = begin_list;
	printf("  ==> after change <==\n");
	while (tmp2)
	{
		printf("%d |%p |%p\n", *(int *)(*tmp2).data, tmp2, (*tmp2).next);
		tmp2 = (*tmp2).next;
	}
	free(begin_list);
	free(sec_list);
	return (0);
}*/
/*
      |        	      BEFORE		  |		   AFTER    	      |
-------------------------------------------------------------------------------
level |     lst_ptr     |	lst       |     lst_ptr	    |	    lst	      |
-------------------------------------------------------------------------------
varia | beg | 2nd | new |     |     |     | beg | 2nd | new |		      |
value | 0x1 | 0x2 | 0x3 |     |     |     | 0x3 | 0x2 | 0x3 |		      |
-------------------------------------------------------------------------------
data  |     |     |     | &c  | &b  | &a  |     |     |     | &c  | &b  | &a  |
next  |     |     |     | 0x2 | 0x0 | 0x0 |     |     |     | 0x2 | 0x0 | 0x1 |
-------------------------------------------------------------------------------
mem_ad| 0xa | 0xb | 0xc | 0x1 | 0x2 | 0x3 | 0xa | 0xb | 0xc | 0x1 | 0x2 | 0x3 |
*/
