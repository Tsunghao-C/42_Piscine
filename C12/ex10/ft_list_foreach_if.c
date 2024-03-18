/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:30:04 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:30:07 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
	*data_ref, int (*cmp)(void *, void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
			f(tmp->data);
		tmp = tmp->next;
	}
}
/*
void	ft_list_data_double(void *lst_data)
{
	int	*ptr;

	ptr = (int *)lst_data;
	*ptr = *ptr * 2;
}

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
	printf("==>  doubled for each even list  <==\n");
	ft_list_foreach_if(lst, &ft_list_data_double, &data_ref, &cmp_mod);
	tmp2 = lst;
	for (int k = 0; k < 8; k++)
	{
		printf("%d item is: %d\n", k, *(int *)tmp2->data);
		tmp2 = tmp2->next;
	}
	return (0);
}*/
