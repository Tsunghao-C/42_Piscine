#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

void	ft_sorted_list_insert(t_list **begin_list, void *data, int
(*cmp)(void *, void *))
{
	t_list	*tmp;
	t_list	*new_list;

	new_list = ft_create_elem(data);
	tmp = *begin_list;
	if (cmp(tmp, data) > 0)
	{
		*begin_list = new_list;
		new_list->next = tmp;
	}
	else
	{
		while (tmp->next && cmp(data, (tmp->next)->data) > 0)
			tmp = tmp->next;
		new_list->next = tmp->next;
		tmp->next = new_list;
	}
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
	char	*tab1[8] = {"I", "am", "a", "big", "list", "of", "strings", "!!"};
	char	*str = " OH yeAh~";
	int	i = 0;
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;

	lst1 = ft_create_elem(*(tab1 + 0));
	while (++i < 8)
		ft_list_push_back(&lst1, *(tab1 + i));
	printf("==>  original list  <==\n");
	tmp1 = lst1;
	while (tmp1)
	{
		printf("item is: %s\n", (char *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  Sort list  <==\n");
	ft_list_sort(&lst1, &ft_strcmp);
	tmp2 = lst1;
	while (tmp2)
	{
		printf("item is: %s\n", (char *)tmp2->data);
		tmp2 = tmp2->next;
	}
	printf("==>  Insert after sorted list  <==\n");
	ft_sorted_list_insert(&lst1, str, &ft_strcmp);
	tmp3 = lst1;
	while (tmp3)
	{
		printf("item is: %s\n", (char *)tmp3->data);
		tmp3 = tmp3->next;
	}
	printf("#  before free, lst is: %p %p %p\n", lst1, lst1->next, lst1->data);
	ft_list_clear(lst1, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst1, lst1->next, lst1->data);
	return (0);
}*/
