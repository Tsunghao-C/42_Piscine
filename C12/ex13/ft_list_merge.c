#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = *begin_list1;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin_list2;
}
/*
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void    free_data(void  *addr);

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	int	tab1[8] = {12, 24, 3, 4, 5, 6, 72, 81};
	int	tab2[8] = {42, 69, 13, 91, 0, 64, 39, 22};
	int	i = 0;
	t_list	*tmp1;
	t_list	*tmp2;

	lst1 = ft_create_elem((tab1 + 0));
	lst2 = ft_create_elem((tab2 + 0));
	while (++i < 8)
	{
		ft_list_push_back(&lst1, (tab1 + i));
		ft_list_push_back(&lst2, (tab2 + i));
	}
	printf("==>  original list  <==\n");
	tmp1 = lst1;
	while (tmp1)
	{
		printf("item is: %d\n", *(int *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  After merge list  <==\n");
	ft_list_merge(&lst1, lst2);
	tmp2 = lst1;
	while (tmp2)
	{
		printf("item is: %d\n", *(int *)tmp2->data);
		tmp2 = tmp2->next;
	}
	printf("#  before free, lst is: %p %p %p\n", lst1, lst1->next, lst1->data);
	ft_list_clear(lst1, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst1, lst1->next, lst1->data);
	return (0);
}*/
