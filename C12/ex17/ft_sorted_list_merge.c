/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuchen <tsuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:42:08 by tsuchen           #+#    #+#             */
/*   Updated: 2024/03/18 11:45:58 by tsuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int
(*cmp)(void *, void *))
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp;

	tmp2 = begin_list2;
	if (cmp((*begin_list1)->data, begin_list2->data) > 0)
	{
		tmp2 = *begin_list1;
		*begin_list1 = begin_list2;
	}
	tmp1 = *begin_list1;
	while (tmp1->next)
	{
		if (cmp((tmp1->next)->data, tmp2->data) > 0)
		{
			tmp = tmp1->next;
			tmp1->next = tmp2;
			tmp2 = tmp;
		}
		tmp1 = tmp1->next;
	}
	tmp1->next = tmp2;
}
/*
int	ft_strcmp(void *str1, void *str2)
{
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while ((*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void    free_data(void  *addr);
void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *));

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	char	*tab1[8] = {"a", "am", "a", "abig", "ago", "at", "aCt", "ant"};
	char	*tab2[7] = {"aAba", "abc", "abe", "bg", "abG", "bC", "bA"};
	int	i = 0;
	int	j = 0;
	t_list	*tmp1;
	t_list	*tmp2;

	lst1 = ft_create_elem(*(tab1 + 0));
	lst2 = ft_create_elem(*(tab2 + 0));
	while (++i < 8)
		ft_list_push_back(&lst1, *(tab1 + i));
	while (++j < 7)
		ft_list_push_back(&lst2, *(tab2 + j));
	printf("==>  original sorted list  <==\n");
	ft_list_sort(&lst1, &ft_strcmp);
	ft_list_sort(&lst2, &ft_strcmp);
	tmp1 = lst1;
	tmp2 = lst2;
	printf("==>  list 1  <==\n");
	while (tmp1)
	{
		printf("item is: %s\n", (char *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  list 2  <==\n");
	while (tmp2)
	{
		printf("item is: %s\n", (char *)tmp2->data);
		tmp2 = tmp2->next;
	}
	printf("==>  After merging list  <==\n");
	ft_sorted_list_merge(&lst1, lst2, &ft_strcmp);
	tmp1 = lst1;
	while (tmp1)
	{
		printf("item is: %s\n", (char *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("#  before free, lst is: %p %p %p\n", lst1, lst1->next, lst1->data);
	ft_list_clear(lst1, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst1, lst1->next, lst1->data);
	return (0);
}*/
