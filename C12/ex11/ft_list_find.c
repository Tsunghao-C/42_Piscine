/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:31:01 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:31:04 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int
(*cmp)(void *, void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
/*
int	cmp_mod(void *lst_data, void *data_ref)
{
	int	l_nbr;
	int	r_nbr;

	l_nbr = *(int *)lst_data;
	r_nbr = *(int *)data_ref;
	if ((l_nbr % r_nbr) == 0)
		return (0);
	return (1);
}

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void    free_data(void  *addr);

int	main(void)
{
	t_list	*lst;
	int	tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	i = 0;
	int	data_ref = 3;
	t_list	*tmp1;
	t_list	*tmp2;

	lst = ft_create_elem((tab + 0));
	while (++i < 8)
		ft_list_push_back(&lst, (tab + i));
	printf("==>  original list  <==\n");
	tmp1 = lst;
	for (int j = 0; j < 8; j++)
	{
		printf("%d item is: %d\n", j, *(int *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  find certain list  <==\n");
	tmp2 = ft_list_find(lst, &data_ref, &cmp_mod);
	printf("first find item in list is: %d\n", *(int *)tmp2->data);
	printf("#  before free, lst is: %p %p %p\n", lst, lst->next, lst->data);
	ft_list_clear(lst, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst, lst->next, lst->data);
	return (0);
}*/
