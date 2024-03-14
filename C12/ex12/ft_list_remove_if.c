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

t_list	*ft_list_remove_if(t_list **begin_list, void *data_ref, int
	(*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = ft_list_find(*begin_list, data_ref, cmp);
	while (tmp)
	{
		if (tmp == (*begin_list))
			*begin_list = tmp->next;
		else
		{
			tmp2 = *begin_list;
			while (tmp2->next != tmp)
				tmp2 = tmp2->next;
			tmp2->next = tmp->next;
		}
		free_fct(tmp);
		free(tmp);
		tmp = ft_list_find(*begin_list, data_ref, cmp);
	}
	return (*begin_list);
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

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void    free_data(void  *addr);

int	main(void)
{
	t_list	*lst;
	int	tab[8] = {12, 24, 3, 4, 5, 6, 72, 81};
	int	i = 0;
	int	data_ref = 3;
	t_list	*tmp1;
	t_list	*tmp2;

	lst = ft_create_elem((tab + 0));
	while (++i < 8)
		ft_list_push_back(&lst, (tab + i));
	printf("==>  original list  <==\n");
	tmp1 = lst;
	while (tmp1)
	{
		printf("item is: %d\n", *(int *)tmp1->data);
		tmp1 = tmp1->next;
	}
	printf("==>  After removal list  <==\n");
	ft_list_remove_if(&lst, &data_ref, &cmp_mod, &free_data);
	tmp2 = lst;
	while (tmp2)
	{
		printf("item is: %d\n", *(int *)tmp2->data);
		tmp2 = tmp2->next;
	}
	printf("#  before free, lst is: %p %p %p\n", lst, lst->next, lst->data);
	ft_list_clear(lst, &free_data);
	printf("#  after free, lst is : %p %p %p\n", lst, lst->next, lst->data);
	return (0);
}*/
