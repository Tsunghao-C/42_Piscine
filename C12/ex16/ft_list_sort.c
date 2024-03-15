#include "ft_list.h"
#include <stdio.h>

void	ft_swap_data(t_list *l1, t_list *l2)
{
	void	*tmp;

	tmp = l1->data;
	l1->data = l2->data;
	l2->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *begin_list;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (cmp(tmp->data, tmp2->data) > 0)
				ft_swap_data(tmp, tmp2);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
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

int	main(void)
{
	t_list	*lst1;
	char	*tab1[8] = {"I", "am", "a", "big", "list", "of", "strings", "!!"};
	int	i = 0;
	t_list	*tmp1;
	t_list	*tmp2;

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
	printf("==>  After sort list  <==\n");
	ft_list_sort(&lst1, &ft_strcmp);
	tmp2 = lst1;
	while (tmp2)
	{
		printf("item is: %s\n", (char *)tmp2->data);
		tmp2 = tmp2->next;
	}
	printf("#  before free, lst is: %p %p %p\n", lst1, lst1->next, lst1->data);
	ft_list_clear(lst1, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst1, lst1->next, lst1->data);
	return (0);
}*/
