#include "ft_list.h"
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
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

t_list	*ft_create_elem(void *data);
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
		printf("%d item is: %d\n", j, *(int *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  doubled for each list  <==\n");
	ft_list_foreach(lst, &ft_list_data_double);
	tmp2 = lst;
	for (int k = 0; k < 4; k++)
	{
		printf("%d item is: %d\n", k, *(int *)tmp2->data);
		tmp2 = tmp2->next;
	}
	return (0);
}*/
