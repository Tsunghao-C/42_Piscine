#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		free_fct(tmp);
		free(tmp);
	}
}

void	free_data(void	*addr)
{
	t_list	*tmp;

	tmp = (t_list *)(addr);
	tmp->data = NULL;
	tmp->next = NULL;
}
/*
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);
	
int	main(void)
{
	t_list	*begin_list;
	int	a = 3;
	int	b = 4;
	int	i = 0;
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*o_next;
	int	*o_data;

	begin_list = ft_create_elem(&a);
	tmp = begin_list;
	while (i < 10)
	{
		ft_list_push_back(&begin_list, &b);
		i++;
	}
	printf("data	|current add	|next add\n");
	while (tmp)
	{
		printf("%d 	|%p |%p\n", *(int *)(*tmp).data, tmp, (*tmp).next);
		tmp = (*tmp).next;
	}
	// save original record
	o_next = begin_list->next;
	o_data = begin_list->data;
	// clear the list
	ft_list_clear(begin_list, &free_data);
	tmp2 = begin_list;
	printf("  ==> after free <==\n");
	printf("tmp2	%p, %p\n", tmp2, &tmp2);
	printf("data before: %p; after: %p\n", o_data, tmp2->data);
	if (tmp2->data != o_data)
		printf("==> list data no longer exists!\n");
	printf("next before: %p; after: %p\n", o_next, tmp2->next);
	if (tmp2->next != o_next)
		printf("==> list link no longer exists!\n");
	return (0);
}*/
